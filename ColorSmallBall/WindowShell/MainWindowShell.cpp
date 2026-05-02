//
// Created by Administrator on 2026/5/2.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindowShell.h" resolved

#include "MainWindowShell.h"
#include "ui_MainWindowShell.h"


MainWindowShell::MainWindowShell(QWidget* parent) :
    QMainWindow(parent), ui(new Ui::MainWindowShell){
    ui->setupUi(this);
}

MainWindowShell::~MainWindowShell(){
    delete ui;
}