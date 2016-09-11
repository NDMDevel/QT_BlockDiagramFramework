/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   MainForm.cpp
 * Author: damian
 *
 * Created on 11 de septiembre de 2016, 12:58
 */

#include "MainForm.h"
#include "QPixmap"
#include "QStyle"
#include "QDebug"
#include "QMouseEvent"
#include "QMimeData"
#include "QDrag"

MainForm::MainForm()
{
    widget.setupUi(this);
    QPixmap icon;
    icon.load("IconsPNG/Applications2.png");
    widget.label_1->setPixmap(icon);
    widget.label_1->setPixmap(widget.label_1->pixmap()->scaled(100,100));
    widget.label_1->setFixedSize(100,100);
    icon.load("IconsPNG/Burnable2.png");
    widget.label_2->setPixmap(icon);
    widget.label_2->setPixmap(widget.label_2->pixmap()->scaled(100,100));
    widget.label_2->setFixedSize(100,100);
    icon.load("IconsPNG/Desktop2.png");
    widget.label_3->setPixmap(icon);
    widget.label_3->setPixmap(widget.label_3->pixmap()->scaled(100,100));
    widget.label_3->setFixedSize(100,100);
    icon.load("IconsPNG/Documents2.png");
    widget.label_4->setPixmap(icon);
    widget.label_4->setPixmap(widget.label_4->pixmap()->scaled(100,100));
    widget.label_4->setFixedSize(100,100);

    setAcceptDrops(true);
    draggin = false;
}

MainForm::~MainForm(){}

void MainForm::mouseMoveEvent(QMouseEvent *event)
{
    qDebug() << QString::number(event->pos().x()) << " " << QString::number(event->pos().y());
}

void MainForm::mousePressEvent(QMouseEvent *event)
{
    if( event->button() == Qt::LeftButton && widget.label_1->geometry().contains(event->pos()) && draggin == false)
    {
        QDrag *drag = new QDrag(this);
        QMimeData *mimeData = new QMimeData;
        mimeData->setText("IconsPNG/Applications2.png");
        drag->setMimeData(mimeData);
        drag->setPixmap(*(widget.label_1->pixmap()));
        drag->setHotSpot(QPoint(0+widget.label_1->width()/2,0+widget.label_1->height()/2));
        Qt::DropAction dropAction = drag->exec(Qt::CopyAction | Qt::MoveAction);
    }
    if( event->button() == Qt::LeftButton && widget.label_2->geometry().contains(event->pos()) && draggin == false)
    {
        QDrag *drag = new QDrag(this);
        QMimeData *mimeData = new QMimeData;
        mimeData->setText("IconsPNG/Burnable2.png");
        drag->setMimeData(mimeData);
        drag->setPixmap(*(widget.label_2->pixmap()));
        drag->setHotSpot(QPoint(0+widget.label_2->width()/2,0+widget.label_2->height()/2));
        Qt::DropAction dropAction = drag->exec(Qt::CopyAction | Qt::MoveAction);
    }
}

/*bool MainForm::eventFilter(QObject *obj, QEvent *event)
{
  if (event->type() == QEvent::MouseMove)
  {
    QMouseEvent *event = (QMouseEvent*)(event);
    qDebug() << QString::number(event->pos().x()) << " " << QString::number(event->pos().y());
//    statusBar()->showMessage(QString("Mouse move (%1,%2)").arg(mouseEvent->pos().x()).arg(mouseEvent->pos().y()));
  }
  return false;
}*/