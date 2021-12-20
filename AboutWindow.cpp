#include "AboutWindow.hpp"

AboutWindow::AboutWindow(QWidget* parent)
  : QWidget(parent) {
  setFixedSize(320, 180);

  m_title = new QLabel("Gugah v0.1");
  m_description = new QTextBrowser;
  m_description->append("Gugah is a free and open source alarm for Linux. Made with QT and G++.");
  m_description->append("\nBy Naufal Adriansyah");

  QVBoxLayout *vlayout = new QVBoxLayout;
  QHBoxLayout *hlayout0 = new QHBoxLayout;
  QHBoxLayout *hlayout1 = new QHBoxLayout;

  hlayout0->addWidget(m_title, Qt::AlignCenter);
  hlayout1->addWidget(m_description, Qt::AlignCenter);

  vlayout->addLayout(hlayout0);
  vlayout->addLayout(hlayout1);
  setLayout(vlayout);
}

AboutWindow::~AboutWindow() {
  delete m_title; 
  delete m_description; 
}