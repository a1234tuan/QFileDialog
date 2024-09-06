#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnQFileDialog_clicked()
{
    //调用静态成员函数getOpenFileName
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "D:/Desktop/CS/QTProgram",
                                                    tr("Text (*.txt)"));//文件类型
    qDebug()<<fileName;
    QFile file;//打开文件逻辑
    file.setFileName(fileName);
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        qDebug()<<"file open error";
    }
    QTextStream in(&file);
    while(!in.atEnd()){
        QString context = in.readLine();
        qDebug()<<context;
    }

    file.close();
}


void Widget::on_btnSe_clicked() {
    // 当按钮被点击时，调用此槽函数
    QFileDialog qFileDialog;

    // 设置文件对话框的模式，允许选择多个已存在的文件
    qFileDialog.setFileMode(QFileDialog::ExistingFiles); // ExistingFiles模式允许选择多个文件

    // 设置文件对话框只显示.txt扩展名的文件
    qFileDialog.setNameFilter("*.txt"); // 只显示.txt文件
    QString defaultPath= "D:/Desktop/CS/QTProgram";//设置打开时的默认文件路径

    qFileDialog.setDirectory(defaultPath);//设置默认目录
    // 检查路径是否存在
    if (!QDir(defaultPath).exists()) {
        qDebug() << "Default path does not exist:" << defaultPath;
        return; // 如果路径不存在，则退出函数
    }

    // 显示文件对话框，并等待用户操作
    qFileDialog.exec(); // 弹出文件选择对话框，阻塞直到用户关闭对话框

    // 获取用户选择的所有文件路径
    QStringList qstrings = qFileDialog.selectedFiles(); // 保存用户选择的文件列表

    // 遍历所有选择的文件路径
    for (QString str : qstrings) {
        // 打印每个文件的路径
        qDebug() << str; // 使用qDebug()输出文件路径
    }
}
