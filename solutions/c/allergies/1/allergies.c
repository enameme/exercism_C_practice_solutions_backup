#include "allergies.h"
_Bool is_allergic_to(allergen_t allergen, int test_result){
    return (1 << allergen) & test_result;
}
allergen_list_t get_allergens(int test_result){
    return (allergen_list_t){.count = ((1 << ALLERGEN_EGGS) & test_result) + (((1 << ALLERGEN_PEANUTS) & test_result) >> 1) + (((1 << ALLERGEN_SHELLFISH) & test_result) >> 2) + (((1 << ALLERGEN_STRAWBERRIES) & test_result) >> 3) + (((1 << ALLERGEN_TOMATOES) & test_result) >> 4) + (((1 << ALLERGEN_CHOCOLATE) & test_result) >> 5) + (((1 << ALLERGEN_POLLEN) & test_result) >> 6) + (((1 << ALLERGEN_CATS) & test_result) >> 7), .allergens = {[0] = ((1 << ALLERGEN_EGGS) & test_result), ((1 << ALLERGEN_PEANUTS) & test_result), ((1 << ALLERGEN_SHELLFISH) & test_result), ((1 << ALLERGEN_STRAWBERRIES) & test_result), ((1 << ALLERGEN_TOMATOES) & test_result), ((1 << ALLERGEN_CHOCOLATE) & test_result), ((1 << ALLERGEN_POLLEN) & test_result), ((1 << ALLERGEN_CATS) & test_result)}};
}