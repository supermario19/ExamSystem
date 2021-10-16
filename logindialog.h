//
// Created by 蓝浩 on 2021/10/15.
//

#ifndef EXAMSYSTEM__LOGINDIALOG_H_
#define EXAMSYSTEM__LOGINDIALOG_H_

#include <QWidget>
#include <QMessageBox>
#include <QRegularExpression>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginDialog; }
QT_END_NAMESPACE

class LoginDialog : public QWidget {
 Q_OBJECT
 private slots:
  void on_login_btn_clicked();
 public:
  explicit LoginDialog(QWidget *parent = nullptr);
  ~LoginDialog() override;

 private:
  Ui::LoginDialog *ui;

  void init_window(); // 初始化窗口
  bool email_check(const QString &email); // 邮箱检查
  bool user_password_check(const QString &username, const QString &password, const QString &filename); // 账号密码检查
};

#endif //EXAMSYSTEM__LOGINDIALOG_H_
