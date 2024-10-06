#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QDir>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QUrl>
#include <QSlider>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::imusic)
{
    ui->setupUi(this);
    audioOutput = new QAudioOutput(this);
    mediaPlayer = new QMediaPlayer(this);
    mediaPlayer->setAudioOutput(audioOutput);

    connect(mediaPlayer,&QMediaPlayer::durationChanged,this,[=](qint64 duration){
        ui->totallabel
            ->setText(QString("%1:%2").arg(duration/1000/60,2,10,QChar('0')).arg(duration/1000%60,2,10,QChar('0')));
        ui->playSlider->setRange(0,duration);
    });
    connect(mediaPlayer,&QMediaPlayer::positionChanged,this,[=](qint64 pos){
        ui->curlabel
            ->setText(QString("%1:%2").arg(pos/1000/60,2,10,QChar('0')).arg(pos/1000%60,2,10,QChar('0')));
        ui->playSlider->setValue(pos);
    });
    connect(ui->playSlider,&QSlider::sliderMoved,mediaPlayer,&QMediaPlayer::setPosition);
    //connect(ui->voiceSlider, &QSlider::valueChanged, audioOutput, &QAudioOutput::setVolume);
    connect(ui->voiceSlider, &QSlider::valueChanged, this, [this](int value) {
        // 确保音量在 0.0 到 1.0 之间
        audioOutput->setVolume(qBound(0.0f, value / 100.0f, 1.0f));
    });
    ui->voiceSlider->setVisible(false);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    auto path=QFileDialog::getExistingDirectory(this,"请选择音乐所在目录","");
    QDir dir(path);
    auto musicList=dir.entryList(QStringList()<<"*.mp3"<<"*.wav");
    ui->listWidget->addItems(musicList);
    ui->listWidget->setCurrentRow(0);
    for(auto file : musicList)
        playList.append(QUrl::fromLocalFile(path+"/"+file));
}


void Widget::on_pushButton_4_clicked()
{
    if(playList.empty()){
        return;
    }
    switch(mediaPlayer->playbackState()){
    case QMediaPlayer::PlaybackState::StoppedState:
    {
        currentindex = ui->listWidget->currentRow();
        mediaPlayer->setSource(playList[currentindex]);
        mediaPlayer->play();
        break;
    }
    case QMediaPlayer::PlaybackState::PausedState:
    {
        mediaPlayer->play();
        break;
    }
    case QMediaPlayer::PlaybackState::PlayingState:
    {
        mediaPlayer->pause();
        break;
    }
    }

}


void Widget::on_pushButton_3_clicked()
{
    currentindex--;
    if(currentindex<=0){
        currentindex=playList.size();
    }
    ui->listWidget->setCurrentRow(currentindex);
    mediaPlayer->setSource(playList[currentindex]);
    mediaPlayer->play();
}


void Widget::on_pushButton_5_clicked()
{
    currentindex++;
    if(currentindex>=playList.size()){
        currentindex=0;
    }
    ui->listWidget->setCurrentRow(currentindex);
    mediaPlayer->setSource(playList[currentindex]);
    mediaPlayer->play();

}


void Widget::on_listWidget_doubleClicked(const QModelIndex &index)
{
    currentindex=index.row();
    mediaPlayer->setSource(playList[currentindex]);
    mediaPlayer->play();
}


void Widget::on_pushButton_6_clicked()
{
    ui->voiceSlider->setVisible(!ui->voiceSlider->isVisible());
}

