/****************************************************************************
** $Id: qt/examples/hello/main.cpp   2.3.7   edited 2001-01-26 $
**
** Copyright (C) 1992-2000 Trolltech AS.  All rights reserved.
**
** This file is part of an example program for Qt.  This example
** program may be used, distributed and modified without limitation.
**
*****************************************************************************/

//#define EMSCRIPTEN_JS

#include "hello.h"
#include <qapplication.h>

#include <string>
#include <QtGui>
#include <QtWidgets>


/*
  The program starts here. It parses the command line and builds a message
  string to be displayed by the Hello widget.
*/

#ifdef EMSCRIPTEN_JS
Hello *h;
#endif

#ifdef EMSCRIPTEN_JS
void app_init( int argc, char **argv )
#else
int main( int argc, char **argv )
#endif
{
    std::string s("Hello, 我是big5中文編碼, 烏龜");
    if (argc >= 2)
    {
      s = argv[1];
    }

#ifdef EMSCRIPTEN_JS
    h = new Hello( s.c_str() );
    h->setWindowTitle( "Qt says hello" );
    h->setFont( QFont("times",32,QFont::Bold) );		// default font
    h->show();
#else
    QApplication a(argc,argv);
    Hello h( s.c_str() );
    //Hello h("hello");
    h.setWindowTitle( "Qt says hello" );
    QObject::connect( &h, SIGNAL(clicked()), &a, SLOT(quit()) );
    h.setFont( QFont("times",32,QFont::Bold) );		// default font
    h.show();
    return a.exec();
#endif
    //h.setBackgroundColor( Qt::white );			// default bg color
    //a.setMainWidget( &h );
}

#ifdef EMSCRIPTEN_JS
void app_exit()
{
    delete h;
}

Q_WIDGETS_MAIN(app_init, app_exit);
#endif
