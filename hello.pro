TEMPLATE	= app
CONFIG		+= qt warn_on release

#ref: http://stackoverflow.com/questions/18663331/how-to-check-the-selected-version-of-qt-in-a-pro-file
lessThan(QT_MAJOR_VERSION, 5) {
QT += core gui # qt4
TARGET = qt4_hello
} else {
QT += widgets # qt5
TARGET = qt5_hello
}

HEADERS		= hello.h \
                  convertencode.h
SOURCES		= hello.cpp \
                  convertencode.cpp \
		  main.cpp
#DEPENDPATH=../../include
REQUIRES=
