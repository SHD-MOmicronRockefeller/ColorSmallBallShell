//
// Created by Administrator on 2026/3/20.
//

// You may need to build the project (run Qt uic code generator) to get "ui_StackedWidgetShell.h" resolved

#include "StackedWidgetShell.h"
#include "ui_StackedWidgetShell.h"

StackedWidgetShell::StackedWidgetShell(QWidget* parent) :
    QWidget(parent), ui(new Ui::StackedWidgetShell) {
    ui->setupUi(this);

    this->stackedLayout = new QStackedLayout();
    if (auto layout = this->layout()){
        this->setLayout(stackedLayout);
        layout->deleteLater();
    }

    this->stackedLayout->setObjectName("stackedLayout");

    this->stackedLayout->setContentsMargins(0, 0, 0, 0);
    this->stackedLayout->setSpacing(0);

    this->setObjectName("StackedWidgetShell");
    this->setLayout(this->stackedLayout);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setStyleSheet(R"(
        QWidget#StackedWidgetShell {
            border: none;
            background-color: transparent;
        }
    )");
}

StackedWidgetShell::~StackedWidgetShell() {
    delete ui;
}

void StackedWidgetShell::addWidget(const QString& objectName, QWidget* widget) {
    this->widgetMap.insert(objectName, widget);
    this->stackedLayout->addWidget(widget);
}

QWidget* StackedWidgetShell::getWidget(const QString& objectName) const {
    return this->widgetMap.value(objectName);
}

void StackedWidgetShell::removeWidget(const QString& objectName) {
    if (QWidget* widget = widgetMap.value(objectName)) {
        stackedLayout->removeWidget(widget);
        widgetMap.remove(objectName);
        delete widget;   // 彻底销毁控件
        widget = nullptr;
    } else {
        qDebug() << "StackedWidgetShell: removeWidget objectName not found";
        QApplication::quit();
    }
}

void StackedWidgetShell::changeWidget(const QString& objectName) const {
    if (this->widgetMap.contains(objectName)) {
        this->stackedLayout->setCurrentWidget(this->widgetMap.value(objectName));
    } else {
        qDebug() << "StackedWidgetShell: changeWidget objectName not found";
        QApplication::quit();
    }
}

void StackedWidgetShell::changeWidget(int index) const {
    if (index >= 0 && index < this->stackedLayout->count()) {
        this->stackedLayout->setCurrentIndex(index);
    } else {
        qDebug() << "StackedWidgetShell: changeWidget index out of range";
        QApplication::quit();
    }
}

bool StackedWidgetShell::isInList(const QString& objectName) const{
    return this->widgetMap.contains(objectName);
}