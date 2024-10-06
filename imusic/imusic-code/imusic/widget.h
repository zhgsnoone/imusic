#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class imusic;
}
QT_END_NAMESPACE
class QAudioOutput;
class QMediaPlayer;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_pushButton_6_clicked();

private:
    Ui::imusic *ui;
    QList<QUrl> playList;
    int currentindex=0;
    QAudioOutput* audioOutput;
    QMediaPlayer* mediaPlayer;
};
#endif // WIDGET_H
