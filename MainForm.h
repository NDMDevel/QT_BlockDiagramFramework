/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MainForm.h
 * Author: damian
 *
 * Created on 11 de septiembre de 2016, 12:58
 */

#ifndef _MAINFORM_H
#define _MAINFORM_H

#include "ui_MainForm.h"

class MainForm : public QDialog
{
    Q_OBJECT
private:
    Ui::MainForm widget;
    bool draggin;
public:
    MainForm();
    virtual ~MainForm();
    virtual void mouseMoveEvent(QMouseEvent *event);
    //bool eventFilter(QObject *obj, QEvent *event);
    virtual void mousePressEvent(QMouseEvent*);
};

#endif /* _MAINFORM_H */
