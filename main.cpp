#include "mainwindow.h"
#include <QApplication>
#include <QtWebEngine/qtwebengineglobal.h>
#include <QtWebEngineWidgets>



int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_ShareOpenGLContexts);
    QApplication a(argc, argv);
    QtWebEngine::initialize();

    QUrl url1;
    QUrl url2;
    if (argc > 1)
        url1 = QUrl::fromUserInput(argv[1]);

    if (argc > 2)
        url2 = QUrl::fromUserInput(argv[2]);

    MainWindow main_window(url1, url2);
    main_window.setGeometry(0,0,1920,1080);
    main_window.show();

    return a.exec();
}
