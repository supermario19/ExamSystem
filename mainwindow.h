//
// Created by 蓝浩 on 2021/10/15.
//

#ifndef EXAMSYSTEM__MAINWINDOW_H_
#define EXAMSYSTEM__MAINWINDOW_H_

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow() override;

 private:
  Ui::MainWindow *ui;
};

#endif //EXAMSYSTEM__MAINWINDOW_H_
