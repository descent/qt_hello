TEMPLATE	= app
CONFIG		+= qt warn_on release
# QT += widgets # qt5
QT += core gui 

HEADERS		= hello.h \
                  convertencode.h
SOURCES		= hello.cpp \
                  convertencode.cpp \
		  main.cpp
TARGET		= hello
#DEPENDPATH=../../include
REQUIRES=
