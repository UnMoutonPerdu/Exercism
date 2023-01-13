#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

#include <map>
#include <stdexcept>
#include <cstdlib>

namespace queen_attack {
    class chess_board {
        private:
            std::pair<int, int> white_piece;
            std::pair<int, int> black_piece;
        public:
            chess_board(std::pair<int, int> , std::pair<int, int>);
            bool is_valid(std::pair<int, int>);
            std::pair<int, int> white() const;
            std::pair<int, int> black() const;
            bool can_attack() const;

    };
}  // namespace queen_attack

#endif // QUEEN_ATTACK_H