//
// Created by 蓝浩 on 2021/10/15.
//

// You may need to build the project (run Qt uic code generator) to get "ui_LoginDialog.h" resolved

#include "logindialog.h"
#include "ui_LoginDialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QWidget(parent), ui(new Ui::LoginDialog) {
  ui->setupUi(this);
  init_window();

  connect(ui->login_btn, SIGNAL(clicked()), this, SLOT(on_login_btn_clicked()));
}

LoginDialog::~LoginDialog() {
  delete ui;
}

void LoginDialog::on_login_btn_clicked() {
  // 验证邮箱地址(正则表达式)
  // ^表示开始, $表示结束, +代表匹配次数>=1次, *为匹配任意次数,{n, m}匹配次数范围
  QRegularExpression rx("^[A-Za-z0-9]+([_.][A-Za-z0-9])*@([A-Za-z0-9-]+.)+[A-Za-z]{2,6}$");
  QRegularExpressionMatch res = rx.match(ui->user_edit->text());
  if (!res.hasMatch()) {
    QMessageBox::information(this, "错误", "邮箱错误,重新输入!");
    ui->user_edit->clear();
    ui->user_edit->setFocus();
    return;
  } else {
    QString filename, // 文件名
            username, // 用户名
            password, // 密码
            line; // 每一行
    QStringList str_list;
    filename = "../account.txt";
    username = ui->user_edit->text();
    password = ui->password_edit->text();

    QFile file(filename);
    QTextStream stream(&file);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
      while (!stream.atEnd()) {
        line = stream.readLine();
        str_list = line.split(","); // 接收账号密码
        if (username == str_list.at(0) && password == str_list.at(1)) {
          // 成功登陆
          QMessageBox::information(this, "欢迎", "欢迎登陆科目一考试系统");
          file.close();
          return;
        } else if (username == str_list.at(0)) {
          QMessageBox::information(this, "提示", "密码错误");
          ui->password_edit->clear();
          file.close();
          return;
        }
        QMessageBox::information(this, "提示", "无用户");
        file.close();
      }
    } else {
      QMessageBox::information(this, "提示", "账号密码文件打开失败!");
    }
  }
}

void LoginDialog::init_window() {
  // 设置窗口标题
  this->setWindowTitle(tr("驾校科目一考试登陆"));
  this->setWindowFlags(Qt::Dialog | Qt::WindowCloseButtonHint);
}

