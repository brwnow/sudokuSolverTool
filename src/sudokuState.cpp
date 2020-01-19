#include "sudokuState.hpp"

const int SudokuState::BOARD_SIDE_SIZE = 9;

SudokuState::SudokuState()
{
    board = new uint_fast16_t[BOARD_SIDE_SIZE * BOARD_SIDE_SIZE];

    initializeBoard();
}

SudokuState::~SudokuState()
{
    if(board != nullptr)
        delete[] board;
}

void SudokuState::initializeBoard()
{
    for(int i = 0; i < BOARD_SIDE_SIZE * BOARD_SIDE_SIZE; ++i)
        board[i] = 0x0;
}