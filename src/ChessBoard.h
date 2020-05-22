//
// Created by stefan on 12.5.20..
//

#ifndef NQUEENSPUZZLE_CHESSBOARD_H
#define NQUEENSPUZZLE_CHESSBOARD_H

#include <SFML/Graphics.hpp>

class ChessBoard : public sf::Drawable {
public:
    explicit ChessBoard(size_t n);

protected:
    void draw(sf::RenderTarget& target, sf::RenderStates state) const;

private:
    sf::Vector2f mUpperLeft{20.f, 20.f};
    float mBoardSize{400.f};
    std::vector<sf::RectangleShape> mSquares;
    //std::vector<sf::Vector2u> mQueenPositions;
};


#endif //NQUEENSPUZZLE_CHESSBOARD_H
