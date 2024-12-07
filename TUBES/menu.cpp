#include "menu.h"
#include <iostream>

int factorialIterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;  // hasil = hasil * i
    }
    return result;
}

int factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int calculateMenuCombinations(int n) {
    return factorialIterative(n);
}
