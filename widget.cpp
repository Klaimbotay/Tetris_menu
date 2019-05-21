#include "widget.h"
#include "ui_widget.h"
#include "QProcess"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::on_gameButton_clicked()
{
    QProcess process;
    process.setWorkingDirectory("/home/klaim/Документы/Game");

    process.start("/home/klaim/Документы/Game/Tetris");
    process.waitForStarted();
    process.waitForFinished();
    process.close();
}
