//
// Created by Administrator on 2026/5/2.
//

// You may need to build the project (run Qt uic code generator) to get "ui_StartMenu.h" resolved

#include "StartMenu.h"
#include "ui_StartMenu.h"


StartMenu::StartMenu(QWidget* parent) :
    QWidget(parent), ui(new Ui::StartMenu){
    ui->setupUi(this);
}

StartMenu::~StartMenu(){
    delete ui;
}