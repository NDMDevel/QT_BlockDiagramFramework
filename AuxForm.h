/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AuxForm.h
 * Author: damian
 *
 * Created on 11 de septiembre de 2016, 12:59
 */

#ifndef _AUXFORM_H
#define _AUXFORM_H

#include "ui_AuxForm.h"

class AuxForm : public QDialog
{
    Q_OBJECT
private:
    Ui::AuxForm widget;
    
public:
    AuxForm();
    virtual ~AuxForm();
    void dropEvent(QDropEvent *event);
    void dragEnterEvent(QDragEnterEvent *event);
};

#endif /* _AUXFORM_H */
