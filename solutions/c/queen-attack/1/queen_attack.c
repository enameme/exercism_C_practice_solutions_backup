#include "queen_attack.h"
attack_status_t can_attack(position_t queen_1, position_t queen_2){
    /*
    pseudocode
    if(queen_1.row < 7 || queen_1.column > 7 || queen_2.row > 7 || queen_2.column > 7 || (queen_1.row == queen_2.row && queen_1.column == queen_2.column)) return INVALID_POSITION;
    
    elif ((queen_1.row == queen_2.row or
    queen_1.column == queen_2.column) xor
    abs(queen_1.column - queen_2.column) == abs(queen_1.row - queen_2.row) ) return yes;
    
    else return no;

    def abs(int i){
        return i * (((i < 0) << 1) - 1);
    }
    */
    return (int[2][2]){{CAN_NOT_ATTACK, CAN_ATTACK}, {INVALID_POSITION, INVALID_POSITION}}[((queen_1.row >> 3) | (queen_1.column >> 3) | (queen_2.row >> 3) | (queen_2.column >> 3)) || !((queen_1.row ^ queen_2.row) | (queen_1.column ^ queen_2.column))][((queen_1.row == queen_2.row) | (queen_1.column == queen_2.column)) ^ ((queen_1.column - queen_2.column) * (((queen_1.column < queen_2.column) << 1) - 1) == (queen_1.row - queen_2.row) * (((queen_1.row < queen_2.row) << 1) - 1))];
    //sorry
}
