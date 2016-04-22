#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

	protected slots :
		void ButtonClicked_Selftest();
		void ButtonClicked_AutoTracking();
		void ButtonClicked_ManuelStyring();
	
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
