#include "mynotepad.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication EditorApp(argc, argv);
    QSplashScreen *splash=new QSplashScreen;
    splash->setPixmap(QPixmap("C:/Users/TCA/Downloads/Sc.jpge"));
    splash->show();



    MyNotepad Editor;
    QTimer::singleShot(2500,splash,SLOT(close()));
    QTimer::singleShot(1000,&Editor,SLOT(show()));

   //Editor.show();

    return EditorApp.exec();
}
