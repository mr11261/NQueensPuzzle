#include "ChessBoard.h"

ChessBoard::ChessBoard(size_t n) {
    mSquares.reserve(n * n);
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            float squareSize{mBoardSize / (float) n};
            sf::RectangleShape square{sf::Vector2f{squareSize, squareSize}};
            sf::Vector2f upperLeft{
                    mUpperLeft.x + i * squareSize,
                    mUpperLeft.y + j * squareSize
            };
            square.setPosition(upperLeft);
            if ((i + j) % 2 == 0)
                square.setFillColor(sf::Color::White);
            else
                square.setFillColor(sf::Color::Black);
            mSquares.push_back(std::move(square));
        }
    }
}

void ChessBoard::draw(sf::RenderTarget &target, sf::RenderStates state) const {
    for (const auto &square : mSquares)
        target.draw(square);
}