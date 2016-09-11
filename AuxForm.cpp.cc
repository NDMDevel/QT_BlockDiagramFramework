/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   AuxForm.cpp
 * Author: damian
 *
 * Created on 11 de septiembre de 2016, 12:59
 */

#include "AuxForm.h"
#include "QDebug"
#include "QDragEnterEvent"
#include "QMimeData"
#include "QLabel"
#include "QPixmap"


AuxForm::AuxForm()
{
    widget.setupUi(this);
    setAcceptDrops(true);
    qDebug() << "from auxform";
}

AuxForm::~AuxForm(){}

void AuxForm::dropEvent(QDropEvent *event)
{
    qDebug() << event->mimeData()->text() << " " << event->pos().x() << " " << event->pos().y();
    QLabel *label = new QLabel(this);
    QPixmap icon;
    icon.load(event->mimeData()->text());
    label->setPixmap(icon);
    label->setPixmap(label->pixmap()->scaled(100,100));
    label->setFixedSize(100,100);
    label->move(event->pos()-QPoint(50,50));
    label->setVisible(true);
}

void AuxForm::dragEnterEvent(QDragEnterEvent *event)
{
    qDebug()<<"dragEnterEvent";
    event->acceptProposedAction();
}
