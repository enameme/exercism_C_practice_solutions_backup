#include "queen_attack.h"
attack_status_t can_attack(position_t queen_1, position_t queen_2){
    uint8_t queen_1_row = queen_1.row, queen_1_column = queen_1.column, queen_2_row = queen_2.row, queen_2_column = queen_2.column;
    return (int[2][2]){{CAN_NOT_ATTACK, CAN_ATTACK}, {INVALID_POSITION, INVALID_POSITION}}[((queen_1_row >> 3) | (queen_1_column >> 3) | (queen_2_row >> 3) | (queen_2_column >> 3)) || !((queen_1_row ^ queen_2_row) | (queen_1_column ^ queen_2_column))][((queen_1_row == queen_2_row) | (queen_1_column == queen_2_column)) ^ ((queen_1_column - queen_2_column) * (((queen_1_column < queen_2_column) << 1) - 1) == (queen_1_row - queen_2_row) * (((queen_1_row < queen_2_row) << 1) - 1))];
}