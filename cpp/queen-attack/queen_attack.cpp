#include "queen_attack.h"

namespace queen_attack {
    bool chess_board::is_valid(std::pair<int, int> pos) {
        if (pos.first < 0 || pos.first >= 8) {
            return false;
        }
        if (pos.second < 0 || pos.second >= 8) {
            return false;
        }
        return true;
    }

    chess_board::chess_board(std::pair<int, int> white, std::pair<int, int> black) {
        if (!is_valid(white) || !is_valid(black)) {
            throw std::domain_error("positions must be valid");
        }
        this->white_piece = white;
        this->black_piece = black;
    }

    std::pair<int, int> chess_board::white() const {
        return this->white_piece;
    }

    std::pair<int, int> chess_board::black() const {
        return this->black_piece;
    }

    bool chess_board::can_attack() const {
        if (white_piece.first == black_piece.first) {
            return true;
        }
        if (white_piece.second == black_piece.second) {
            return true;
        }
        if (std::abs(white_piece.first - black_piece.first) == std::abs(white_piece.second - black_piece.second)) {
            return true;
        }
        return false;
    }
}  // namespace queen_attack
