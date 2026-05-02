//
// Created by Administrator on 2026/5/2.
//

#ifndef COLORSMALLBALLSHELL_GAMECONTROLER_H
#define COLORSMALLBALLSHELL_GAMECONTROLER_H

#include <QApplication>
#include <QObject>

class StartMenu;
class MainWindowShell;

class GameControler : public QApplication
{
    Q_OBJECT
public:
    explicit GameControler(int argc, char *argv[]);
    ~GameControler() override;

private:
    MainWindowShell* _mainWindow = nullptr;
    StartMenu* _startMenu = nullptr;
public:
    bool initMainWindow();
    MainWindowShell* mainWindow();
    StartMenu* startMenu();

    static int exec();
};


#endif //COLORSMALLBALLSHELL_GAMECONTROLER_H