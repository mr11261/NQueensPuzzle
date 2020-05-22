#ifndef NQUEENSPUZZLE_APPLICATION_H
#define NQUEENSPUZZLE_APPLICATION_H

#include "ChessBoard.h"
#include <TGUI/TGUI.hpp>

class Application {
public:
    Application();

    void run();

private:
    void processEvents();

    void draw();

    sf::RenderWindow mWindow;
    tgui::Gui mGui;
    ChessBoard mChessBoard;
};


#endif //NQUEENSPUZZLE_APPLICATION_H
