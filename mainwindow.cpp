#include <QtWebEngineWidgets>
#include <QtWidgets>

#include "mainwindow.h"


MainWindow::MainWindow(QUrl url1, QUrl url2, QWidget *parent)
    : QMainWindow(parent)
{
    if (!url1.isEmpty() && !url2.isEmpty())
    {
        top_view = new QWebEngineView(this);
        top_view->load(url1);
        top_view->setGeometry(0,0,960,1080);

        bottom_view = new QWebEngineView(this);
        bottom_view->load(url2);
        bottom_view->setGeometry(960,0,960,1080);
    }
    else if ( !url1.isEmpty())
    {
        top_view = new QWebEngineView(this);
        top_view->load(url1);
        top_view->setGeometry(0,0,1920,1080);
    }
    else
    {
        top_view = new QWebEngineView(this);
        top_view->load(QUrl("http://www.brightsign.biz/"));
        top_view->setGeometry(0,0,1920,1080);
    }
}

MainWindow::~MainWindow()
{

}
