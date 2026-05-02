//
// Created by Administrator on 2026/5/2.
//

#include "GameControler.h"

#include "ColorSmallBall/StartPage/startmenu.h"
#include "ColorSmallBall/WindowShell/MainWindowShell.h"


GameControler::GameControler(int argc, char *argv[]) : QApplication(argc, argv){
    initMainWindow();
}

GameControler::~GameControler(){
    this->startMenu()->deleteLater();
    this->mainWindow()->deleteLater();
    this->deleteLater();
}

bool GameControler::initMainWindow(){
    mainWindow()->show();
    _mainWindow->ui->widget->addWidget(startMenu()->objectName(), startMenu());
    startMenu()->show();
    return true;
}

MainWindowShell* GameControler::mainWindow(){
    if (_mainWindow == nullptr)
        _mainWindow = new MainWindowShell();
    return _mainWindow;
}

StartMenu* GameControler::startMenu(){
    if (_startMenu == nullptr)
        _startMenu = new StartMenu();
    return _startMenu;
}

int GameControler::exec(){
    return QApplication::exec();
}
