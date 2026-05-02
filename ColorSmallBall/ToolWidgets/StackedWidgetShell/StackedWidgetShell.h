//
// Created by Administrator on 2026/3/20.
//

#ifndef RANDOMSELECTIONPOOL_STACKEDWIDGETSHELL_H
#define RANDOMSELECTIONPOOL_STACKEDWIDGETSHELL_H

#include <QWidget>
#include "ColorSmallBall/Applications/QtPrecompiled.h"
#include <QStackedLayout>

#include "base.h"
#ifdef __DEBUG__
#include "cmake-build-debug/ColorSmallBallShell_autogen/include/ui_StackedWidgetShell.h"
#elifdef __RELEASE__
#include "cmake-build-release/ColorSmallBallShell_autogen/include/ui_StackedWidgetShell.h"
#elifdef __DEFAULT__

#else
#error "必须定义编译模式"
#endif

// #include "ColorSmallBall/ToolWidgets/StackedWidgetShell/StackedWidgetShell.h"

QT_BEGIN_NAMESPACE

namespace Ui {
    class StackedWidgetShell;
}

QT_END_NAMESPACE


class StackedWidgetShell : public QWidget {
    Q_OBJECT

public:
    explicit StackedWidgetShell(QWidget* parent = nullptr);
    ~StackedWidgetShell() override;

    Ui::StackedWidgetShell* ui;

    QStackedLayout* stackedLayout = nullptr;

    // 页面控制
private:
    QMap<QString, QWidget*> widgetMap;
public:
    void addWidget(const QString& objectName, QWidget* widget);
    QWidget* getWidget(const QString& objectName) const;
    void removeWidget(const QString& objectName);

    void changeWidget(const QString& objectName) const;
    void changeWidget(int index) const;

    bool isInList(const QString& objectName) const;
};

#endif //RANDOMSELECTIONPOOL_STACKEDWIDGETSHELL_H