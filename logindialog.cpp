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

  bool result = email_check(ui->user_edit->text());
  if (!result) {
    QMessageBox box(this);
    box.setText("邮箱格式错误");
    box.exec();
  } else {
    QString filename, username, password;
    username = ui->user_edit->text();
    password = ui->password_edit->text();
    filename = "../account.txt";
    if (user_password_check(username, password, filename)) {
      QMessageBox box(this);
      box.setText("登陆成功");
      box.exec();
    } else {
      // 验证错误
      QMessageBox box(this);
      box.setText("登陆错误");
      box.exec();
    }
  }
}

void LoginDialog::init_window() {
  // 设置窗口标题
  this->setWindowTitle(tr("驾校科目一考试登陆"));
  this->setWindowFlags(Qt::Dialog | Qt::WindowCloseButtonHint);
}

bool LoginDialog::email_check(const QString &email) {
  QRegularExpression rx("^[A-Za-z0-9]+([_.][A-Za-z0-9])*@([A-Za-z0-9-]+.)+[A-Za-z]{2,6}$");
  QRegularExpressionMatch res = rx.match(ui->user_edit->text());
  if (!res.hasMatch()) {
    return false;
  } else {
    return true;
  }
}

bool LoginDialog::user_password_check(const QString &username, const QString &password, const QString &filename) {
  QStringList str_list;
  QString line;
  QFile file(filename);
  QTextStream stream(&file);
  if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    while (!stream.atEnd()) {
      line = stream.readLine();
      str_list = line.split(","); // 接收账号密码
      if (username == str_list.at(0) && password == str_list.at(1)) {
        file.close();
        return true;
      } else if (username == str_list.at(0)) {
        ui->password_edit->clear();
        file.close();
        return false;
      }
    }
    file.close();
    return false;
  } else {
    qDebug() << "文件打开失败";
    return false;
  }
}