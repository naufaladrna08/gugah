#ifndef __ABOUTWINDOW_H__
#define __ABOUTWINDOW_H__

#include <QtWidgets/QWidget>
#include <QtWidgets/QtWidgets>

class QLabel;
class QTextBrowser;

class AboutWindow : public QWidget  {
  Q_OBJECT

  private:
    QLabel* m_title;
    QTextBrowser* m_description;

  public:
    explicit AboutWindow(QWidget* parent = 0);
    ~AboutWindow();
};

#endif // __ABOUTWINDOW_H__