#include <stdlib.h> // For NULL

/**
 * Finds the difference between the largest and smallest values in an array.
 */
int max_diff(int* array, int alen) {

    if (array == NULL || alen <= 1) {
        return 0;
    }

    int min = array[0];
    int max = array[0];

    for (int i = 1; i < alen; i++) {

        if (array[i] < min) {
            min = array[i];
        }

        if (array[i] > max) {
            max = array[i];
        }
    }

    return max - min;
}