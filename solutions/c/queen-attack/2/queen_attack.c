#include "queen_attack.h"
attack_status_t can_attack(position_t queen_1, position_t queen_2){
    return (int[2][2]){{CAN_NOT_ATTACK, CAN_ATTACK}, {INVALID_POSITION, INVALID_POSITION}}[((queen_1.row >> 3) | (queen_1.column >> 3) | (queen_2.row >> 3) | (queen_2.column >> 3)) || !((queen_1.row ^ queen_2.row) | (queen_1.column ^ queen_2.column))][((queen_1.row == queen_2.row) | (queen_1.column == queen_2.column)) ^ ((queen_1.column - queen_2.column) * (((queen_1.column < queen_2.column) << 1) - 1) == (queen_1.row - queen_2.row) * (((queen_1.row < queen_2.row) << 1) - 1))];
}