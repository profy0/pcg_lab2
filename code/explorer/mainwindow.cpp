#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString path = "C:/";
    dirmodel = new QFileSystemModel(this);
    dirmodel->setRootPath(path);
    ui->treeView->setModel(dirmodel);

    img = new QImage();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    QString path = dirmodel->fileInfo(index).absoluteFilePath();

    ui->FileName->setText("File name: " + dirmodel->fileInfo(index).fileName());
    img->load(path);

    ui->colordepth->setText("Color depth: " + QString::number(img->depth()));
    ui->Size->setText("Size(pixels): " + QString::number(img->width()) + " x " + QString::number(img->height()));

    int xdpi = (double)img->dotsPerMeterX() / 39.37;
    int ydpi = (double)img->dotsPerMeterY() / 39.37;

    ui->resolution->setText("Resolution: " + QString::number((int)sqrt(xdpi * xdpi + ydpi * ydpi)));
}
