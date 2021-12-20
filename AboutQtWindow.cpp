#include "AboutQtWindow.hpp"

AboutQtWindow::AboutQtWindow(QWidget* parent)
  : QWidget(parent) {
  setFixedSize(320, 180);

  m_title = new QLabel("Qt5");
  m_description = new QTextBrowser;
  m_description->append("Qt is a cross-platform application development framework for desktop, embedded and mobile.");

  QVBoxLayout *vlayout = new QVBoxLayout;
  QHBoxLayout *hlayout0 = new QHBoxLayout;
  QHBoxLayout *hlayout1 = new QHBoxLayout;

  hlayout0->addWidget(m_title, Qt::AlignCenter);
  hlayout1->addWidget(m_description, Qt::AlignCenter);

  vlayout->addLayout(hlayout0);
  vlayout->addLayout(hlayout1);
  setLayout(vlayout);
}

AboutQtWindow::~AboutQtWindow() {
  delete m_title; 
  delete m_description; 
}