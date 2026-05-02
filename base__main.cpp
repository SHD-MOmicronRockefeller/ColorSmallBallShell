//
// Created by Administrator on 2026/5/2.
//

#include <QApplication>
#include "ColorSmallBall/Applications/GameControler.h"

int main(int argc, char* argv[]){
    QApplication app(argc, argv);
    auto gameControler = new GameControler(argc, argv);
    return GameControler::exec();
}
