#ifndef SUDOKU_STATE_HPP
#define SUDOKU_STATE_HPP

#include <cstdint>

class SudokuState
{
public:
    SudokuState();
    ~SudokuState();

private:
    static const int BOARD_SIDE_SIZE;

    uint_fast16_t *board;

    void initializeBoard();
};

#endif // SUDOKU_STATE_HPP