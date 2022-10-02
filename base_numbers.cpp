#include "middle.h"

#include <iostream>

int itc_len_num(long long number) {
    int i = 0;
    if (number < 0) {
        i++;
        number *= -1;
    }
    while (number > 0) {
        number = number / 10;
        i++;
    }
    return i;
}

int itc_sum_num(long long number) {
    int i = 0;
    if (number < 0) number *= -1;
    while (number > 0) {
        i += (int) (number % 10);
        number = number / 10;
    }
    return i;
}

long long itc_multi_num(long long number) {
    long long i = 1;
    if (number < 0) number *= -1;
    while (number > 0) {
        i *= number % 10;
        number /= 10;
    }
    return i;
}

long long itc_rev_num(long long number) {
    long long result = 0;
    long long input = number < 0 ? number * -1 : number;
    while (input > 0) {
        result = result * 10 + (int) (input % (long long) 10);
        input = input / 10;
    }
    return result;
}
