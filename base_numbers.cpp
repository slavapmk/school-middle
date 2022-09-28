#include "middle.h"

int itc_len_num(long long number) {
    int i = 0;
    while (number > 0) {
        number = number / 10;
        i++;
    }
    return i;
}

int itc_sum_num(long long number) {
    int i = 0;
    while (number > 0) {
        i += int(number % (long long) 10);
        number = number / 10;
    }
    return i;
}

long long itc_multi_num(long long number) {
    int i = 1;
    while (number > 0) {
        i *= int(number % (long long) 10);
        number = number / 10;
    }
    return i;
}

int itc_rev_num(long long number) {
    int result = 0;
    while (number > 0) {
        result = result * 10 + int(number % (long long) 10);
        number = number / 10;
    }
    return result;
}
