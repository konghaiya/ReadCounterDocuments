#############################################################################
# Makefile for building: DataConversion
# Generated by qmake (3.0) (Qt 5.2.0)
# Project:  DataConversion.pro
# Template: subdirs
# Command: C:\Qt\Qt5.2.0\5.2.0\mingw48_32\bin\qmake.exe -spec win32-g++ -o Makefile DataConversion.pro
#############################################################################

MAKEFILE      = Makefile

first: make_first
QMAKE         = C:\Qt\Qt5.2.0\5.2.0\mingw48_32\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = copy /y
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		sub-KsDbServer \
		sub-ReadXml \
		sub-DataConversionMain \
		sub-DcLog


sub-KsDbServer-qmake_all:  FORCE
	@if not exist KsDbServer\ mkdir KsDbServer\ & if not exist KsDbServer\ exit 1
	cd KsDbServer\ && $(QMAKE) D:\Code\QtCode\DataConversion\KsDbServer\KsDbServer.pro -spec win32-g++ -o Makefile
	cd KsDbServer\ && $(MAKE) -f Makefile qmake_all
sub-KsDbServer: FORCE
	@if not exist KsDbServer\ mkdir KsDbServer\ & if not exist KsDbServer\ exit 1
	cd KsDbServer\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\KsDbServer\KsDbServer.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile
sub-KsDbServer-make_first: FORCE
	@if not exist KsDbServer\ mkdir KsDbServer\ & if not exist KsDbServer\ exit 1
	cd KsDbServer\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\KsDbServer\KsDbServer.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile 
sub-KsDbServer-all: FORCE
	@if not exist KsDbServer\ mkdir KsDbServer\ & if not exist KsDbServer\ exit 1
	cd KsDbServer\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\KsDbServer\KsDbServer.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile all
sub-KsDbServer-clean: FORCE
	@if not exist KsDbServer\ mkdir KsDbServer\ & if not exist KsDbServer\ exit 1
	cd KsDbServer\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\KsDbServer\KsDbServer.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile clean
sub-KsDbServer-distclean: FORCE
	@if not exist KsDbServer\ mkdir KsDbServer\ & if not exist KsDbServer\ exit 1
	cd KsDbServer\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\KsDbServer\KsDbServer.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile distclean
sub-KsDbServer-install_subtargets: FORCE
	@if not exist KsDbServer\ mkdir KsDbServer\ & if not exist KsDbServer\ exit 1
	cd KsDbServer\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\KsDbServer\KsDbServer.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile install
sub-KsDbServer-uninstall_subtargets: FORCE
	@if not exist KsDbServer\ mkdir KsDbServer\ & if not exist KsDbServer\ exit 1
	cd KsDbServer\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\KsDbServer\KsDbServer.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile uninstall
sub-ReadXml-qmake_all:  FORCE
	@if not exist ReadXml\ mkdir ReadXml\ & if not exist ReadXml\ exit 1
	cd ReadXml\ && $(QMAKE) D:\Code\QtCode\DataConversion\ReadXml\ReadXml.pro -spec win32-g++ -o Makefile
	cd ReadXml\ && $(MAKE) -f Makefile qmake_all
sub-ReadXml: FORCE
	@if not exist ReadXml\ mkdir ReadXml\ & if not exist ReadXml\ exit 1
	cd ReadXml\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\ReadXml\ReadXml.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile
sub-ReadXml-make_first: FORCE
	@if not exist ReadXml\ mkdir ReadXml\ & if not exist ReadXml\ exit 1
	cd ReadXml\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\ReadXml\ReadXml.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile 
sub-ReadXml-all: FORCE
	@if not exist ReadXml\ mkdir ReadXml\ & if not exist ReadXml\ exit 1
	cd ReadXml\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\ReadXml\ReadXml.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile all
sub-ReadXml-clean: FORCE
	@if not exist ReadXml\ mkdir ReadXml\ & if not exist ReadXml\ exit 1
	cd ReadXml\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\ReadXml\ReadXml.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile clean
sub-ReadXml-distclean: FORCE
	@if not exist ReadXml\ mkdir ReadXml\ & if not exist ReadXml\ exit 1
	cd ReadXml\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\ReadXml\ReadXml.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile distclean
sub-ReadXml-install_subtargets: FORCE
	@if not exist ReadXml\ mkdir ReadXml\ & if not exist ReadXml\ exit 1
	cd ReadXml\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\ReadXml\ReadXml.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile install
sub-ReadXml-uninstall_subtargets: FORCE
	@if not exist ReadXml\ mkdir ReadXml\ & if not exist ReadXml\ exit 1
	cd ReadXml\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\ReadXml\ReadXml.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile uninstall
sub-DataConversionMain-qmake_all:  FORCE
	@if not exist DataConversionMain\ mkdir DataConversionMain\ & if not exist DataConversionMain\ exit 1
	cd DataConversionMain\ && $(QMAKE) D:\Code\QtCode\DataConversion\DataConversionMain\DataConversionMain.pro -spec win32-g++ -o Makefile
	cd DataConversionMain\ && $(MAKE) -f Makefile qmake_all
sub-DataConversionMain: FORCE
	@if not exist DataConversionMain\ mkdir DataConversionMain\ & if not exist DataConversionMain\ exit 1
	cd DataConversionMain\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DataConversionMain\DataConversionMain.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile
sub-DataConversionMain-make_first: FORCE
	@if not exist DataConversionMain\ mkdir DataConversionMain\ & if not exist DataConversionMain\ exit 1
	cd DataConversionMain\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DataConversionMain\DataConversionMain.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile 
sub-DataConversionMain-all: FORCE
	@if not exist DataConversionMain\ mkdir DataConversionMain\ & if not exist DataConversionMain\ exit 1
	cd DataConversionMain\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DataConversionMain\DataConversionMain.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile all
sub-DataConversionMain-clean: FORCE
	@if not exist DataConversionMain\ mkdir DataConversionMain\ & if not exist DataConversionMain\ exit 1
	cd DataConversionMain\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DataConversionMain\DataConversionMain.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile clean
sub-DataConversionMain-distclean: FORCE
	@if not exist DataConversionMain\ mkdir DataConversionMain\ & if not exist DataConversionMain\ exit 1
	cd DataConversionMain\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DataConversionMain\DataConversionMain.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile distclean
sub-DataConversionMain-install_subtargets: FORCE
	@if not exist DataConversionMain\ mkdir DataConversionMain\ & if not exist DataConversionMain\ exit 1
	cd DataConversionMain\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DataConversionMain\DataConversionMain.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile install
sub-DataConversionMain-uninstall_subtargets: FORCE
	@if not exist DataConversionMain\ mkdir DataConversionMain\ & if not exist DataConversionMain\ exit 1
	cd DataConversionMain\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DataConversionMain\DataConversionMain.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile uninstall
sub-DcLog-qmake_all:  FORCE
	@if not exist DcLog\ mkdir DcLog\ & if not exist DcLog\ exit 1
	cd DcLog\ && $(QMAKE) D:\Code\QtCode\DataConversion\DcLog\DcLog.pro -spec win32-g++ -o Makefile
	cd DcLog\ && $(MAKE) -f Makefile qmake_all
sub-DcLog: FORCE
	@if not exist DcLog\ mkdir DcLog\ & if not exist DcLog\ exit 1
	cd DcLog\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DcLog\DcLog.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile
sub-DcLog-make_first: FORCE
	@if not exist DcLog\ mkdir DcLog\ & if not exist DcLog\ exit 1
	cd DcLog\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DcLog\DcLog.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile 
sub-DcLog-all: FORCE
	@if not exist DcLog\ mkdir DcLog\ & if not exist DcLog\ exit 1
	cd DcLog\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DcLog\DcLog.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile all
sub-DcLog-clean: FORCE
	@if not exist DcLog\ mkdir DcLog\ & if not exist DcLog\ exit 1
	cd DcLog\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DcLog\DcLog.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile clean
sub-DcLog-distclean: FORCE
	@if not exist DcLog\ mkdir DcLog\ & if not exist DcLog\ exit 1
	cd DcLog\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DcLog\DcLog.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile distclean
sub-DcLog-install_subtargets: FORCE
	@if not exist DcLog\ mkdir DcLog\ & if not exist DcLog\ exit 1
	cd DcLog\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DcLog\DcLog.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile install
sub-DcLog-uninstall_subtargets: FORCE
	@if not exist DcLog\ mkdir DcLog\ & if not exist DcLog\ exit 1
	cd DcLog\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DcLog\DcLog.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile uninstall

Makefile: DataConversion.pro C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/win32-g++/qmake.conf C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/spec_pre.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/qdevice.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/device_config.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/common/shell-win32.conf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/qconfig.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_axbase.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_axbase_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_axcontainer.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_axserver.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_axserver_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_bluetooth.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_clucene_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_concurrent.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_core.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_core_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_declarative.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_declarative_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_designer.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_designer_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_gui.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_gui_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_help.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_help_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_multimedia.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_network.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_network_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_nfc.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_nfc_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_opengl.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_opengl_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_openglextensions.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_platformsupport_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_positioning.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_positioning_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_printsupport.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_qml.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_qml_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_qmltest.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_quick.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_quick_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_script.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_script_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_scripttools.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_scripttools_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_sensors.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_sensors_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_serialport.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_serialport_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_sql.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_sql_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_svg.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_svg_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_testlib.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_testlib_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_uitools.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_uitools_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_webkit.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_webkit_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_webkitwidgets.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_widgets.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_widgets_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_winextras.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_winextras_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_xml.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_xml_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/qt_functions.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/qt_config.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/win32-g++/qmake.conf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/spec_post.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/exclusive_builds.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/default_pre.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/win32/default_pre.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/resolve_config.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/exclusive_builds_post.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/default_post.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/win32/rtti.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/warn_on.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/win32/windows.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/testcase_targets.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/exceptions.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/yacc.prf \
		C:/Qt/Qt5.2.0/5.2.0/mingw48_32/mkspecs/features/lex.prf \
		DataConversion.pro
	$(QMAKE) -spec win32-g++ -o Makefile DataConversion.pro
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\spec_pre.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\qdevice.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\device_config.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\common\shell-win32.conf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\qconfig.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_axbase.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_axbase_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_axcontainer.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_axcontainer_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_axserver.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_axserver_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_bluetooth.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_bluetooth_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_bootstrap_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_clucene_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_concurrent.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_concurrent_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_core.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_core_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_declarative.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_declarative_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_designer.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_designer_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_designercomponents_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_gui.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_gui_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_help.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_help_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_multimedia.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_multimedia_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_multimediawidgets.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_multimediawidgets_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_network.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_network_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_nfc.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_nfc_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_opengl.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_opengl_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_openglextensions.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_openglextensions_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_platformsupport_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_positioning.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_positioning_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_printsupport.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_printsupport_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_qml.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_qml_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_qmldevtools_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_qmltest.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_qmltest_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_quick.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_quick_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_quickparticles_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_script.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_script_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_scripttools.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_scripttools_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_sensors.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_sensors_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_serialport.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_serialport_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_sql.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_sql_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_svg.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_svg_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_testlib.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_testlib_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_uitools.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_uitools_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_webkit.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_webkit_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_webkitwidgets.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_webkitwidgets_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_widgets.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_widgets_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_winextras.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_winextras_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_xml.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_xml_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_xmlpatterns.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\modules\qt_lib_xmlpatterns_private.pri:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\qt_functions.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\qt_config.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\win32-g++\qmake.conf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\spec_post.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\exclusive_builds.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\default_pre.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\win32\default_pre.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\resolve_config.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\exclusive_builds_post.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\default_post.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\win32\rtti.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\warn_on.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\win32\windows.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\testcase_targets.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\exceptions.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\yacc.prf:
C:\Qt\Qt5.2.0\5.2.0\mingw48_32\mkspecs\features\lex.prf:
DataConversion.pro:
qmake: FORCE
	@$(QMAKE) -spec win32-g++ -o Makefile DataConversion.pro

qmake_all: sub-KsDbServer-qmake_all sub-ReadXml-qmake_all sub-DataConversionMain-qmake_all sub-DcLog-qmake_all FORCE

make_first: sub-KsDbServer-make_first sub-ReadXml-make_first sub-DataConversionMain-make_first sub-DcLog-make_first FORCE
all: sub-KsDbServer-all sub-ReadXml-all sub-DataConversionMain-all sub-DcLog-all FORCE
clean: sub-KsDbServer-clean sub-ReadXml-clean sub-DataConversionMain-clean sub-DcLog-clean FORCE
distclean: sub-KsDbServer-distclean sub-ReadXml-distclean sub-DataConversionMain-distclean sub-DcLog-distclean FORCE
	-$(DEL_FILE) Makefile
install_subtargets: sub-KsDbServer-install_subtargets sub-ReadXml-install_subtargets sub-DataConversionMain-install_subtargets sub-DcLog-install_subtargets FORCE
uninstall_subtargets: sub-KsDbServer-uninstall_subtargets sub-ReadXml-uninstall_subtargets sub-DataConversionMain-uninstall_subtargets sub-DcLog-uninstall_subtargets FORCE

sub-KsDbServer-debug:
	@if not exist KsDbServer\ mkdir KsDbServer\ & if not exist KsDbServer\ exit 1
	cd KsDbServer\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\KsDbServer\KsDbServer.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile debug
sub-ReadXml-debug:
	@if not exist ReadXml\ mkdir ReadXml\ & if not exist ReadXml\ exit 1
	cd ReadXml\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\ReadXml\ReadXml.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile debug
sub-DataConversionMain-debug:
	@if not exist DataConversionMain\ mkdir DataConversionMain\ & if not exist DataConversionMain\ exit 1
	cd DataConversionMain\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DataConversionMain\DataConversionMain.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile debug
sub-DcLog-debug:
	@if not exist DcLog\ mkdir DcLog\ & if not exist DcLog\ exit 1
	cd DcLog\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DcLog\DcLog.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile debug
debug: sub-KsDbServer-debug sub-ReadXml-debug sub-DataConversionMain-debug sub-DcLog-debug

sub-KsDbServer-release:
	@if not exist KsDbServer\ mkdir KsDbServer\ & if not exist KsDbServer\ exit 1
	cd KsDbServer\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\KsDbServer\KsDbServer.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile release
sub-ReadXml-release:
	@if not exist ReadXml\ mkdir ReadXml\ & if not exist ReadXml\ exit 1
	cd ReadXml\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\ReadXml\ReadXml.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile release
sub-DataConversionMain-release:
	@if not exist DataConversionMain\ mkdir DataConversionMain\ & if not exist DataConversionMain\ exit 1
	cd DataConversionMain\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DataConversionMain\DataConversionMain.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile release
sub-DcLog-release:
	@if not exist DcLog\ mkdir DcLog\ & if not exist DcLog\ exit 1
	cd DcLog\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DcLog\DcLog.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile release
release: sub-KsDbServer-release sub-ReadXml-release sub-DataConversionMain-release sub-DcLog-release

sub-KsDbServer-check:
	@if not exist KsDbServer\ mkdir KsDbServer\ & if not exist KsDbServer\ exit 1
	cd KsDbServer\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\KsDbServer\KsDbServer.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile check
sub-ReadXml-check:
	@if not exist ReadXml\ mkdir ReadXml\ & if not exist ReadXml\ exit 1
	cd ReadXml\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\ReadXml\ReadXml.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile check
sub-DataConversionMain-check:
	@if not exist DataConversionMain\ mkdir DataConversionMain\ & if not exist DataConversionMain\ exit 1
	cd DataConversionMain\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DataConversionMain\DataConversionMain.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile check
sub-DcLog-check:
	@if not exist DcLog\ mkdir DcLog\ & if not exist DcLog\ exit 1
	cd DcLog\ && ( if not exist Makefile $(QMAKE) D:\Code\QtCode\DataConversion\DcLog\DcLog.pro -spec win32-g++ -o Makefile ) && $(MAKE) -f Makefile check
check: sub-KsDbServer-check sub-ReadXml-check sub-DataConversionMain-check sub-DcLog-check
install: install_subtargets  FORCE

uninstall:  uninstall_subtargets FORCE

FORCE:

