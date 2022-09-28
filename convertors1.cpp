#include "middle.h"

long long itc_bin_num(long long number) {
    long long result = 0;
    int index = 1;
    while (number > 0) {
        result += index * (number % 2);
        index *= 10;
        number = number / 2;
    }
    return result;
}

long long itc_oct_num(long long number) {
    long long result = 0;
    int index = 1;
    while (number > 0) {
        result += index * (number % 8);
        index *= 10;
        number = number / 8;
    }
    return result;
}

int itc_rev_bin_num(long long number) {
    int index = 1;
    int result = 0;
    while (number > 0) {
        int remainder = (int) number % 10;
        if (remainder >= 2) return -1;
        result += remainder * index;
        index *= 2;
        number /= 10;
    }
    return result;
}

int itc_rev_oct_num(long long number) {
    int index = 1;
    int result = 0;
    while (number > 0) {
        int remainder = (int) number % 10;
        if (remainder >= 8) return -1;
        result += remainder * index;
        index *= 8;
        number /= 10;
    }
    return result;
}
