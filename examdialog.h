//
// Created by 蓝浩 on 2021/10/16.
//

#ifndef EXAMSYSTEM__EXAMDIALOG_H_
#define EXAMSYSTEM__EXAMDIALOG_H_

#include <QDialog>
#include <QTimer>
#include <QTextEdit>
#include <QLabel>
#include <QRadioButton>
#include <QCheckBox>
#include <QGridLayout>
#include <QFile>
#include <QStringList>
#include <QTextStream>
#include <QMessageBox>
#include <QApplication>
#include <QFont>
#include <QPushButton>
#include <QButtonGroup>
#define HEIGHT 900
#define WIDTH 800

QT_BEGIN_NAMESPACE
namespace Ui { class ExamDialog; }
QT_END_NAMESPACE

class ExamDialog : public QDialog {
 Q_OBJECT

 public:
  explicit ExamDialog(QWidget *parent = nullptr);
  ~ExamDialog() override;
 private slots:
  void fresh_time();
 private:
  Ui::ExamDialog *ui;
  QTextEdit *text_edit; // 文本编辑器
  QLabel *title_label[10]; // 题目标签
  QRadioButton *radio_button[32]; // 题目选项
  QCheckBox *check_box[4]; // 多选题按钮
  QRadioButton *radio_button_right; // 判断题正确选项
  QRadioButton *radio_button_error; // 判断题错误选项
  QGridLayout *layout; // 布局管理器
  QPushButton *submit; // 提交按钮
  QButtonGroup *button_group[9]; // 按钮分组

  QTimer *m_timer; // 计时器
  int m_time; // 花费时间
  QStringList answer; // 答案列表

  void init_window(); // 初始化窗口
  void init_QTimer(); // 初始化计数器
  void init_QGridLayout(); // 初始化布局管理器
  bool init_QTextEdit(); // 初始化文本编辑器
  void init_buttons(); //  初始化按钮
};

#endif //EXAMSYSTEM__EXAMDIALOG_H_
