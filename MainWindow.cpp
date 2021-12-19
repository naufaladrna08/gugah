#include "MainWindow.hpp"

MainWindow::MainWindow(QWidget* parent)
  : QWidget(parent) {
  m_hrs = new QLineEdit("00");
  m_min = new QLineEdit("00");
  m_randomLabel = new QLabel(":");
  m_ringtones = new QComboBox();

  m_ringtones->addItem("Bell #1");
  m_ringtones->addItem("Bell #2");
  m_ringtones->addItem("Bell #3");

  m_hrs->setValidator(new QIntValidator(0, 24, this));
  m_min->setValidator(new QIntValidator(0, 60, this));
  m_hrs->setMaxLength(2);
  m_min->setMaxLength(2);

  QHBoxLayout* hlayout1 = new QHBoxLayout();
  QHBoxLayout* hlayout2 = new QHBoxLayout();
  QVBoxLayout* vlayout = new QVBoxLayout();
  hlayout1->addWidget(m_hrs);
  hlayout1->addWidget(m_randomLabel);
  hlayout1->addWidget(m_min);
  hlayout2->addWidget(m_ringtones);

  vlayout->addLayout(hlayout1);
  vlayout->addLayout(hlayout2);

  setLayout(vlayout);
}

MainWindow::~MainWindow() {

}