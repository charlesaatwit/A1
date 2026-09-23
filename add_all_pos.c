#include <stdlib.h> // For NULL

/**
 * Adds all positive numbers in an array.
 */
int add_all_pos(int* array, int alen) {
    
    if (array == NULL) {
        return 0;
    }

    int total = 0;

    for (int i = 0; i < alen; i++) {
        if (array[i] > 0) {
            total = total + array[i];
        }
    }

    return total;
}