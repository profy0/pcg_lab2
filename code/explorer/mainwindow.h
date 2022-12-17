#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileSystemModel>
#include <QtCore>
#include <QtGui>
#include <QtMultimedia/QMediaPlayer>
#include <QtWidgets>
#include <QImage>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_treeView_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;

    QFileSystemModel *dirmodel;
    QFileSystemModel *filemodel;

    QMediaPlayer *player;
    QImage *img;

};
#endif // MAINWINDOW_H
