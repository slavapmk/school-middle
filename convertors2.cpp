#include "middle.h"

int itc_covert_num(long long number, int ss) {
    int result = 0;
    int index = 1;
    while (number > 0) {
        result += (int) (index * (number % ss));
        index *= 10;
        number = number / ss;
    }
    return result;
}

int itc_rev_covert_num(long long number, int ss) {
    int index = 1;
    int result = 0;
    while (number > 0) {
        int remainder = (int) number % 10;
        if (remainder >= ss) return -1;
        result += remainder * index;
        index *= ss;
        number /= 10;
    }
    return result;
}

