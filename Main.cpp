#include <cstdio>
#include "MainWindow.hpp"
#include <QtWidgets/QtWidgets>

int main(int argc, char** argv) {
  QApplication a(argc, argv);

  MainWindow win;
  win.show();

  return a.exec();
}