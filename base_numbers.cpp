#include "middle.h"

#include <iostream>

int itc_len_num(long long number) {
    long long result = 0;
    if (number < 0)
        number *= -1;
    if (number == 0)
        return 1;
    while (number > 0) {
        result++;
        number /= 10;
    }
    return (int) result;
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
    if (number == 0) return 0;
    if (number < 0) number *= -1;
    while (number > 0) {
        i *= number % 10;
        number /= 10;
    }
    return i;
}

long long itc_rev_num(long long number) {
    return itc_len_num(itc_reverse(number));
}
