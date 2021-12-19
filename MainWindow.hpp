#ifndef __MAINWINDOW_H__
#define __MAINWINDOW_H__

#include <QtWidgets/QWidget>
#include <QtWidgets/QtWidgets>

class QLineEdit;
class QLabel;

class MainWindow : public QWidget {
  Q_OBJECT

  public:
    explicit MainWindow(QWidget* parent = 0);
    ~MainWindow();

  private:
    QLineEdit* m_hrs;
    QLineEdit* m_min;
    QLabel* m_randomLabel;
};

#endif // __MAINWINDOW_H__