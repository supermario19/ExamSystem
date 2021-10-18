//
// Created by 蓝浩 on 2021/10/16.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ExamDialog.h" resolved

#include "examdialog.h"
#include "ui_ExamDialog.h"

ExamDialog::ExamDialog(QWidget *parent) :
    QDialog(parent), ui(new Ui::ExamDialog) {
  ui->setupUi(this);
  init_window(); // 初始化窗口
  init_QTimer(); // 初始化计时器
  init_QGridLayout(); // 初始化布局
  if (!init_QTextEdit()) {
    QMessageBox::information(this, "错误", "题目初始化失败");
    QTimer::singleShot(0, qApp, SLOT(quit()));
  }
  init_buttons();
}

ExamDialog::~ExamDialog() {
  delete ui;
}

void ExamDialog::init_window() {
  // 设置字体大小
  QFont font;
  font.setPointSize(12);
  this->setFont(font);

  // 设置窗体背景
  this->setPalette(QPalette(QColor(209, 215, 255)));

  // 设置窗口大小
  this->resize(WIDTH, HEIGHT);

  // 设置窗体标题
  this->setWindowTitle("考试已用时: 0分 : 0秒");
  this->setWindowFlags(Qt::Dialog | Qt::WindowCloseButtonHint);
}

void ExamDialog::init_QTimer() {
  m_time = 0;
  m_timer = new QTimer(this);
  m_timer->setInterval(1000);
  m_timer->start();
  connect(m_timer, SIGNAL(timeout()), this, SLOT(fresh_time()));
}

void ExamDialog::init_QGridLayout() {
  layout = new QGridLayout(this);
  // 设置控件间距
  layout->setSpacing(10);
  layout->setContentsMargins(10, 10, 10, 10);
}

bool ExamDialog::init_QTextEdit() {
  QString str_line; // 保存文件中一行数据
  QStringList str_list; // 答案字符串
  QString filename("../exam.txt");
  QFile file(filename);
  QTextStream stream(&file);
  if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    text_edit = new QTextEdit(this);
    text_edit->setReadOnly(true);
    QString text; // 显示到文本编辑器
    int n_line = 0;
    while (!stream.atEnd()) {
      // 过滤首行
      if (n_line == 0) {
        stream.readLine();
        n_line++;
        continue;
      }
      // 过滤答案
      if ((n_line >= 6 && n_line <= 6 * 9 && n_line % 6 == 0) || (n_line == 6 * 9 + 4)) {
        str_line = stream.readLine();
        str_list = str_line.split(" ");
        answer.append(str_list.at(1));
        text += "\n";
        n_line++;
        continue;
      }
      text += stream.readLine();
      text += '\n';
      n_line++;
    }
    file.close();
    text_edit->setText(text);
    layout->addWidget(text_edit, 0, 0, 1, 10);
    return true;
  } else {
    return false;
  }
}

void ExamDialog::init_buttons() {
  QStringList string_list = {"A", "B", "C", "D"};
  // 标签布局
  for (int i = 0; i < 10; i++) {
    this->title_label[i] = new QLabel(this);
    this->title_label[i]->setText("第" + QString::number(i + 1) + "题");
    this->layout->addWidget(title_label[i], 1, i);
    if (i == 9) {
      radio_button_right = new QRadioButton(this);
      radio_button_right->setText("正确");
      radio_button_error = new QRadioButton(this);
      radio_button_error->setText("错误");
      this->layout->addWidget(radio_button_right, 2, i);
      this->layout->addWidget(radio_button_error, 3, i);

      button_group[8] = new QButtonGroup(this);
      button_group[8]->addButton(radio_button_right);
      button_group[8]->addButton(radio_button_error);
      break;
    }

    if (i < 8) {
      button_group[i] = new QButtonGroup(this);
    }
    // 选择题
    for (int j = 0; j < 4; j++) {
      // 多选题
      if (i == 8) {
        this->check_box[j] = new QCheckBox(this);
        this->check_box[j]->setText(string_list.at(j));
        this->layout->addWidget(check_box[j], 2 + j, i);
      } else {
        // 单选题
        this->radio_button[4 * i + j] = new QRadioButton(this);
        this->radio_button[4 * i + j]->setText(string_list.at(j));
        this->layout->addWidget(radio_button[4 * i + j], 2 + j, i);
        button_group[i]->addButton(radio_button[4 * i + j]);
      }
    }
  }
  submit = new QPushButton(this);
  submit->setText("提交");
  submit->setFixedSize(100, 35);
  this->layout->addWidget(submit, 6, 9);
}

void ExamDialog::fresh_time() {
  m_time++;
  QString minute = QString::number(m_time / 60);
  QString second = QString::number(m_time % 60);
  setWindowTitle("考试已用时: " + minute + "分 : " + second + "秒");
}
