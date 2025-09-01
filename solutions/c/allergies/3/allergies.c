#include "allergies.h"
_Bool is_allergic_to(allergen_t allergen, int test_result){
    return (1 << allergen) & test_result;
}
allergen_list_t get_allergens(int test_result){
    return (allergen_list_t){.count = (1 & test_result) + ((2 & test_result) >> 1) + ((4 & test_result) >> 2) + ((8 & test_result) >> 3) + ((16 & test_result) >> 4) + ((32 & test_result) >> 5) + ((64 & test_result) >> 6) + ((128 & test_result) >> 7), .allergens = {[0] = (1 & test_result), (2 & test_result), (4 & test_result), (8 & test_result), (16 & test_result), (32 & test_result), (64 & test_result), (128 & test_result)}};
}