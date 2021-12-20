#ifndef __MAINWINDOW_H__
#define __MAINWINDOW_H__

#include <QtWidgets/QWidget>
#include <QtWidgets/QtWidgets>
#include "AboutWindow.hpp"
#include "AboutQtWindow.hpp"

class QLineEdit;
class QLabel;
class QComboBox;
class QMenu;
class QAction;
class QMenuBar;

class MainWindow : public QWidget {
  Q_OBJECT

  public:
    explicit MainWindow(QWidget* parent = 0);
    ~MainWindow();

  protected slots:
    void exit();
    void about();
    void aboutQt();

  private:
    QLineEdit* m_hrs;
    QLineEdit* m_min;
    QLabel* m_randomLabel;
    QComboBox* m_ringtones;

    /* Context menu stuff */
    void createActions();
    void createMenus();

    QMenuBar* m_menu;
    QMenu* m_fileMenu;
    QMenu* m_helpMenu;
    QAction* m_exitAct;
    QAction* m_aboutAct;
    QAction* m_aboutQtAct;
    QLabel* m_infoLabel;

    AboutWindow* mw_about;
    AboutQtWindow* mw_aboutqt;
};

#endif // __MAINWINDOW_H__