#ifndef __ABOUTWINDOW_H__
#define __ABOUTWINDOW_H__

#include <QtWidgets/QWidget>
#include <QtWidgets/QtWidgets>

class AboutWindow : public QWidget  {
  Q_OBJECT

  public:
    explicit AboutWindow(QWidget* parent = 0);
    ~AboutWindow();
};

#endif // __ABOUTWINDOW_H__