/****************************************************************************
** $Id: qt/examples/hello/hello.h   2.3.7   edited 2001-01-26 $
**
** Copyright (C) 1992-2000 Trolltech AS.  All rights reserved.
**
** This file is part of an example program for Qt.  This example
** program may be used, distributed and modified without limitation.
**
*****************************************************************************/

#ifndef HELLO_H
#define HELLO_H
// qt5
//#include <QtWidgets>

#include <QWidget> 

class Hello : public QWidget
{
    Q_OBJECT
public:
    Hello( const char *text, QWidget * parent = 0, Qt::WindowFlags f = 0);
signals:
    void clicked();
protected:
    void mouseReleaseEvent( QMouseEvent * );
    void paintEvent( QPaintEvent * );
private slots:
    void animate();
private:
    QString qstr_;
    int     b;
};

#endif
