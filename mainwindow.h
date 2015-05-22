#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
class QWebEngineView;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QUrl url1, QUrl url2, QWidget *parent = 0);
    ~MainWindow();
private:
    QWebEngineView *top_view;
    QWebEngineView *bottom_view;

};

#endif // MAINWINDOW_H
