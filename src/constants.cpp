#include "constants.hpp"

// check if (row, col) is within bound on internal board
bool isValidCell(int row, int col) {
    return 0 <= row && row < GRID_SIZE && 0 <= col && col < GRID_SIZE;
}