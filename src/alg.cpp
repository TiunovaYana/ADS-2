// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double a = value;
    for (uint64_t i = 1; i < n; i++)
        a *= value;
    return a;
}

uint64_t fact(uint16_t n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }
    uint64_t factorial = 1;
    for (uint64_t i = 2; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

double calcItem(double x, uint16_t n) {
    return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
    double e = 0;
    for (uint64_t j = 0; j <= count; j++)
        e += calcItem(x, j);
    return e;
}

double sinn(double x, uint16_t count) {
    double s = 0;
    for (uint64_t h = 1; h <= count; h++)
        s += pown(-1, h - 1) * calcItem(x, 2 * h - 1);
    return s;
}

double cosn(double x, uint16_t count) {
    double c = 0;
    for (uint64_t k = 1; k <= count; k++)
        c += pown(-1, k - 1) * calcItem(x, 2 * k - 2);
    return c;
}
