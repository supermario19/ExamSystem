#include <QApplication>
#include <QCoreApplication>
#include <QDebug>
#include "logindialog.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  LoginDialog login;
  login.show();
  return a.exec(); // 使程序进入消息循环
}
