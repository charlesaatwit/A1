/**
 * Calculates x raised to the power of y.
 */
int power(int x, int y) {

    if (x < 0 || y < 0) {
        return 0;
    }

    int result = 1;

    for (int i = 0; i < y; i++) {
        result = result * x;
    }

    return result;
}