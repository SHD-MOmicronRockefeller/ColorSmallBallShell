//
// Created by Administrator on 2026/5/2.
//

#ifndef COLORSMALLBALLSHELL_MAINWINDOWSHELL_H
#define COLORSMALLBALLSHELL_MAINWINDOWSHELL_H

#include <QMainWindow>

#include "base.h"
#ifdef __DEBUG__
#include "cmake-build-debug/ColorSmallBallShell_autogen/include/ui_MainWindowShell.h"
#elifdef __RELEASE__
#include "cmake-build-release/ColorSmallBallShell_autogen/include/ui_MainWindowShell.h"
#elifdef __DEFAULT__

#else
#error "必须定义编译模式"
#endif

QT_BEGIN_NAMESPACE

namespace Ui
{
class MainWindowShell;
}

QT_END_NAMESPACE

class MainWindowShell : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindowShell(QWidget* parent = nullptr);
    ~MainWindowShell() override;

    Ui::MainWindowShell* ui;
};


#endif //COLORSMALLBALLSHELL_MAINWINDOWSHELL_H