#include "Application.h"
#include <iostream>

Application::Application()
        : mWindow({800, 600}, "NQueensPuzzle"),
          mGui(mWindow),
          mChessBoard(8u) {
    mWindow.setFramerateLimit(60);
    mGui.add(tgui::Picture::create("../resources/background.jpg"));
}

void Application::run() {
    while (mWindow.isOpen()) {
        processEvents();
        draw();
    }
}

void Application::processEvents() {
    sf::Event event;
    while (mWindow.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            mWindow.close();
        }
        mGui.handleEvent(event);
    }
}

void Application::draw() {
    mWindow.clear();
    mGui.draw();
    mWindow.draw(mChessBoard);
    mWindow.display();
}
