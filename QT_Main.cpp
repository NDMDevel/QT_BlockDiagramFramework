/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: damian
 *
 * Created on 11 de septiembre de 2016, 12:56
 */

#include <QApplication>
#include "MainForm.h"
#include "AuxForm.h"

int main(int argc, char *argv[])
{
    // initialize resources, if needed
    //Q_INIT_RESOURCE("Icons.qrc");

    QApplication app(argc, argv);

    // create and show your widgets here
    MainForm form;
    AuxForm aux;
    aux.move(700,150);
    form.move(400,150);
    form.show();
    aux.show();
    return app.exec();
}
