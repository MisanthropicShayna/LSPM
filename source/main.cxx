#include <QApplication>
#include <QLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

#include "headers/main_dlg.hxx"


int main(int argc, char** argv) {
    QApplication application(argc, argv);

    MainWindow main_window;
    main_window.show();

    return application.exec();
}