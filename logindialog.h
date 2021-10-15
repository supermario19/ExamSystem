//
// Created by 蓝浩 on 2021/10/15.
//

#ifndef EXAMSYSTEM__LOGINDIALOG_H_
#define EXAMSYSTEM__LOGINDIALOG_H_

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginDialog; }
QT_END_NAMESPACE

class LoginDialog : public QWidget {
 Q_OBJECT

 public:
  explicit LoginDialog(QWidget *parent = nullptr);
  ~LoginDialog() override;

 private:
  Ui::LoginDialog *ui;
};

#endif //EXAMSYSTEM__LOGINDIALOG_H_
