#ifndef __MAINWINDOW_H__
#define __MAINWINDOW_H__

#include <QtWidgets/QWidget>
#include <QtWidgets/QtWidgets>
#include "AboutWindow.hpp"
#include "AboutQtWindow.hpp"

#define LOG qInfo()

class QLineEdit;
class QLabel;
class QComboBox;
class QMenu;
class QAction;
class QMenuBar;
class QPushButton;

class MainWindow : public QWidget {
  Q_OBJECT

  public:
    explicit MainWindow(QWidget* parent = 0);
    ~MainWindow();

  protected slots:
    void exit();
    void about();
    void aboutQt();
    void ringtoneChanged(int index);

  private:
    /* Context menu stuff */
    void createActions();
    void createMenus();

    QLineEdit* m_hrs;
    QLineEdit* m_min;
    QLineEdit* m_source;
    QLabel* m_randomLabel;
    QComboBox* m_ringtones;
    QPushButton* m_openFile;
    QPushButton* m_start;

    QMenuBar* m_menu;
    QMenu* m_fileMenu;
    QMenu* m_helpMenu;
    QAction* m_exitAct;
    QAction* m_aboutAct;
    QAction* m_aboutQtAct;
    QLabel* m_infoLabel;

    AboutWindow* mw_about;
    AboutQtWindow* mw_aboutqt;

    char* m_ringtone;
};

#endif // __MAINWINDOW_H__