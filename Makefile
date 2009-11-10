#############################################################################
# Makefile for building: test_comport
# Generated by qmake (2.01a) (Qt 4.5.2) on: Tue Nov 10 13:33:07 2009
# Project:  test_comport.pro
# Template: app
# Command: /home/oleg/qtsdk-2009.03/qt/bin/qmake -spec ../../../qtsdk-2009.03/qt/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile test_comport.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -D_TTY_POSIX_ -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I../../../qtsdk-2009.03/qt/mkspecs/linux-g++ -I. -I../../../qtsdk-2009.03/qt/include/QtCore -I../../../qtsdk-2009.03/qt/include/QtNetwork -I../../../qtsdk-2009.03/qt/include/QtGui -I../../../qtsdk-2009.03/qt/include -I../qextserialport -I. -I.
LINK          = g++
LFLAGS        = -Wl,-rpath,/home/oleg/qtsdk-2009.03/qt/lib
LIBS          = $(SUBLIBS)  -L/home/oleg/qtsdk-2009.03/qt/lib libqextserialport.so -lQtGui -L/home/oleg/qtsdk-2009.03/qt/lib -L/usr/X11R6/lib -pthread -lfreetype -lgobject-2.0 -lSM -lICE -pthread -pthread -lXrender -lfontconfig -lXext -lX11 -lQtNetwork -pthread -pthread -lQtCore -lm -pthread -lgthread-2.0 -lrt -lglib-2.0 -ldl -lpthread
AR            = ar cqs
RANLIB        = 
QMAKE         = /home/oleg/qtsdk-2009.03/qt/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		mainwindow.cpp \
		my_comport.cpp \
		threadcomport.cpp moc_mainwindow.cpp \
		moc_my_comport.cpp \
		moc_threadcomport.cpp
OBJECTS       = main.o \
		mainwindow.o \
		my_comport.o \
		threadcomport.o \
		moc_mainwindow.o \
		moc_my_comport.o \
		moc_threadcomport.o
DIST          = ../../../qtsdk-2009.03/qt/mkspecs/common/g++.conf \
		../../../qtsdk-2009.03/qt/mkspecs/common/unix.conf \
		../../../qtsdk-2009.03/qt/mkspecs/common/linux.conf \
		../../../qtsdk-2009.03/qt/mkspecs/qconfig.pri \
		../../../qtsdk-2009.03/qt/mkspecs/features/qt_functions.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/qt_config.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/exclusive_builds.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/default_pre.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/debug.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/default_post.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/warn_on.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/qt.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/unix/thread.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/moc.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/resources.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/uic.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/yacc.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/lex.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/include_source_dir.prf \
		test_comport.pro
QMAKE_TARGET  = test_comport
DESTDIR       = 
TARGET        = test_comport

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: test_comport.pro  ../../../qtsdk-2009.03/qt/mkspecs/linux-g++/qmake.conf ../../../qtsdk-2009.03/qt/mkspecs/common/g++.conf \
		../../../qtsdk-2009.03/qt/mkspecs/common/unix.conf \
		../../../qtsdk-2009.03/qt/mkspecs/common/linux.conf \
		../../../qtsdk-2009.03/qt/mkspecs/qconfig.pri \
		../../../qtsdk-2009.03/qt/mkspecs/features/qt_functions.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/qt_config.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/exclusive_builds.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/default_pre.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/debug.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/default_post.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/warn_on.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/qt.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/unix/thread.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/moc.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/resources.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/uic.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/yacc.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/lex.prf \
		../../../qtsdk-2009.03/qt/mkspecs/features/include_source_dir.prf \
		/home/oleg/qtsdk-2009.03/qt/lib/libQtGui.prl \
		/home/oleg/qtsdk-2009.03/qt/lib/libQtCore.prl \
		/home/oleg/qtsdk-2009.03/qt/lib/libQtNetwork.prl
	$(QMAKE) -spec ../../../qtsdk-2009.03/qt/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile test_comport.pro
../../../qtsdk-2009.03/qt/mkspecs/common/g++.conf:
../../../qtsdk-2009.03/qt/mkspecs/common/unix.conf:
../../../qtsdk-2009.03/qt/mkspecs/common/linux.conf:
../../../qtsdk-2009.03/qt/mkspecs/qconfig.pri:
../../../qtsdk-2009.03/qt/mkspecs/features/qt_functions.prf:
../../../qtsdk-2009.03/qt/mkspecs/features/qt_config.prf:
../../../qtsdk-2009.03/qt/mkspecs/features/exclusive_builds.prf:
../../../qtsdk-2009.03/qt/mkspecs/features/default_pre.prf:
../../../qtsdk-2009.03/qt/mkspecs/features/debug.prf:
../../../qtsdk-2009.03/qt/mkspecs/features/default_post.prf:
../../../qtsdk-2009.03/qt/mkspecs/features/warn_on.prf:
../../../qtsdk-2009.03/qt/mkspecs/features/qt.prf:
../../../qtsdk-2009.03/qt/mkspecs/features/unix/thread.prf:
../../../qtsdk-2009.03/qt/mkspecs/features/moc.prf:
../../../qtsdk-2009.03/qt/mkspecs/features/resources.prf:
../../../qtsdk-2009.03/qt/mkspecs/features/uic.prf:
../../../qtsdk-2009.03/qt/mkspecs/features/yacc.prf:
../../../qtsdk-2009.03/qt/mkspecs/features/lex.prf:
../../../qtsdk-2009.03/qt/mkspecs/features/include_source_dir.prf:
/home/oleg/qtsdk-2009.03/qt/lib/libQtGui.prl:
/home/oleg/qtsdk-2009.03/qt/lib/libQtCore.prl:
/home/oleg/qtsdk-2009.03/qt/lib/libQtNetwork.prl:
qmake:  FORCE
	@$(QMAKE) -spec ../../../qtsdk-2009.03/qt/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile test_comport.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/test_comport1.0.0 || $(MKDIR) .tmp/test_comport1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/test_comport1.0.0/ && $(COPY_FILE) --parents mainwindow.h my_comport.h threadcomport.h .tmp/test_comport1.0.0/ && $(COPY_FILE) --parents main.cpp mainwindow.cpp my_comport.cpp threadcomport.cpp .tmp/test_comport1.0.0/ && $(COPY_FILE) --parents mainwindow.ui .tmp/test_comport1.0.0/ && (cd `dirname .tmp/test_comport1.0.0` && $(TAR) test_comport1.0.0.tar test_comport1.0.0 && $(COMPRESS) test_comport1.0.0.tar) && $(MOVE) `dirname .tmp/test_comport1.0.0`/test_comport1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/test_comport1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_my_comport.cpp moc_threadcomport.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_my_comport.cpp moc_threadcomport.cpp
moc_mainwindow.cpp: my_comport.h \
		threadcomport.h \
		mainwindow.h
	/home/oleg/qtsdk-2009.03/qt/bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_my_comport.cpp: threadcomport.h \
		my_comport.h
	/home/oleg/qtsdk-2009.03/qt/bin/moc $(DEFINES) $(INCPATH) my_comport.h -o moc_my_comport.cpp

moc_threadcomport.cpp: threadcomport.h
	/home/oleg/qtsdk-2009.03/qt/bin/moc $(DEFINES) $(INCPATH) threadcomport.h -o moc_threadcomport.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h
ui_mainwindow.h: mainwindow.ui
	/home/oleg/qtsdk-2009.03/qt/bin/uic mainwindow.ui -o ui_mainwindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp mainwindow.h \
		my_comport.h \
		threadcomport.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		my_comport.h \
		threadcomport.h \
		ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

my_comport.o: my_comport.cpp my_comport.h \
		threadcomport.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o my_comport.o my_comport.cpp

threadcomport.o: threadcomport.cpp threadcomport.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o threadcomport.o threadcomport.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_my_comport.o: moc_my_comport.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_my_comport.o moc_my_comport.cpp

moc_threadcomport.o: moc_threadcomport.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_threadcomport.o moc_threadcomport.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

