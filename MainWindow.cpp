#include "MainWindow.hpp"

MainWindow::MainWindow(QWidget* parent)
  : QWidget(parent) {
  m_hrs = new QLineEdit("00");
  m_min = new QLineEdit("00");
  m_source = new QLineEdit("/home");
  m_randomLabel = new QLabel(":");
  m_ringtones = new QComboBox();
  m_openFile = new QPushButton("Open");
  m_start = new QPushButton("Start Alarm");

  m_ringtones->addItem("Bell #1");
  m_ringtones->addItem("Bell #2");
  m_ringtones->addItem("Custom File");

  m_hrs->setValidator(new QIntValidator(0, 24, this));
  m_min->setValidator(new QIntValidator(0, 60, this));
  m_hrs->setMaxLength(2);
  m_min->setMaxLength(2);

  m_source->setReadOnly(false);

  m_source->setVisible(false);
  m_openFile->setVisible(false);

  QHBoxLayout* hlayout1 = new QHBoxLayout();
  QHBoxLayout* hlayout2 = new QHBoxLayout();
  QHBoxLayout* hlayout3 = new QHBoxLayout();
  QHBoxLayout* hlayout4 = new QHBoxLayout();
  QVBoxLayout* vlayout = new QVBoxLayout();

  hlayout1->setContentsMargins(0, 26, 0, 0);
  hlayout1->addWidget(m_hrs);
  hlayout1->addWidget(m_randomLabel);
  hlayout1->addWidget(m_min);
  hlayout2->addWidget(m_ringtones);
  hlayout3->addWidget(m_source);
  hlayout3->addWidget(m_openFile);
  hlayout4->addWidget(m_start);
  
  vlayout->addLayout(hlayout1);
  vlayout->addLayout(hlayout2);
  vlayout->setContentsMargins(8, 8, 8, 8);
  vlayout->addLayout(hlayout3);
  vlayout->addLayout(hlayout4);

  setLayout(vlayout);
  createActions();
  createMenus();
}

MainWindow::~MainWindow() {
  delete m_hrs;
  delete m_min;
  delete m_randomLabel;
  delete m_ringtones;
}

void MainWindow::createActions() {
  m_exitAct = new QAction(tr("&Exit"), this);
  m_exitAct->setShortcut(QKeySequence::Quit);
  m_exitAct->setStatusTip(tr("Quit program"));

  m_aboutAct = new QAction(tr("&About"), this);
  m_aboutQtAct = new QAction(tr("&About QT"), this);

  connect(m_exitAct, &QAction::triggered, this, &MainWindow::exit);
  connect(m_aboutAct, &QAction::triggered, this, &MainWindow::about);
  connect(m_aboutQtAct, &QAction::triggered, this, &MainWindow::aboutQt);

  connect(m_ringtones, SIGNAL(currentIndexChanged(int)), this, SLOT(ringtoneChanged(int)));
}

void MainWindow::createMenus() {
  m_menu = new QMenuBar(this);
  m_menu->setNativeMenuBar(false);
  m_menu->setMinimumWidth(8000);

  m_fileMenu = m_menu->addMenu(tr("&File"));
  m_fileMenu->addAction(m_exitAct);

  m_helpMenu = m_menu->addMenu(tr("&Help"));
  m_helpMenu->addAction(m_aboutAct);
  m_helpMenu->addAction(m_aboutQtAct);
}

void MainWindow::exit() {

}

void MainWindow::about() {
  mw_about = new AboutWindow;
  mw_about->show();
}

void MainWindow::aboutQt() {
  mw_aboutqt = new AboutQtWindow;
  mw_aboutqt->show();
}

void MainWindow::ringtoneChanged(int index) {
  m_ringtone = m_ringtones->currentText().toLocal8Bit().data();

  if (index == 2) {
    m_source->setVisible(true);
    m_openFile->setVisible(true);
  } else {
    m_source->setVisible(false);
    m_openFile->setVisible(false);
  }
}