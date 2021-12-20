#ifndef __ABOUTQTWINDOW_H__
#define __ABOUTQTWINDOW_H__

#include <QtWidgets/QWidget>
#include <QtWidgets/QtWidgets>
#include <QtCore/QDebug>
#define LOG qInfo()

class AboutQtWindow : public QWidget {
  Q_OBJECT

  private:
    QLabel* m_title;
    QTextBrowser* m_description;

  public:
    explicit AboutQtWindow(QWidget* parent = 0);
    ~AboutQtWindow();
};

#endif // __ABOUTQTWINDOW_H__