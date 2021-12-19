#include "MainWindow.hpp"

MainWindow::MainWindow(QWidget* parent)
  : QWidget(parent) {
  m_hrs = new QLineEdit("00");
  m_min = new QLineEdit("00");
  m_randomLabel = new QLabel(":");

  m_hrs->setValidator(new QIntValidator(0, 24, this));
  m_min->setValidator(new QIntValidator(0, 60, this));
  m_hrs->setMaxLength(2);
  m_min->setMaxLength(2);

  QHBoxLayout* layout = new QHBoxLayout();
  layout->addWidget(m_hrs);
  layout->addWidget(m_randomLabel);
  layout->addWidget(m_min);

  setLayout(layout);
}

MainWindow::~MainWindow() {

}