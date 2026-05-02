//
// Created by Administrator on 2026/5/2.
//

#ifndef COLORSMALLBALLSHELL_STARTMENU_H
#define COLORSMALLBALLSHELL_STARTMENU_H

#include <QWidget>

#include "base.h"
#ifdef __DEBUG__
#include "cmake-build-debug/ColorSmallBallShell_autogen/include/ui_StartMenu.h"
#elifdef __RELEASE__
#include "cmake-build-release/ColorSmallBallShell_autogen/include/ui_StartMenu.h"
#elifdef __DEFAULT__

#else
#error "必须定义编译模式"
#endif

QT_BEGIN_NAMESPACE

namespace Ui
{
class StartMenu;
}

QT_END_NAMESPACE

class StartMenu : public QWidget
{
    Q_OBJECT

public:
    explicit StartMenu(QWidget* parent = nullptr);
    ~StartMenu() override;

private:
    Ui::StartMenu* ui;
};


#endif //COLORSMALLBALLSHELL_STARTMENU_H