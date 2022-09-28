#include "middle.h"

int itc_second_max_num(long long number) {
    if (number / 10 == 0)return -1;
    int max = itc_max_num(number);
    int smax = -1;
    while (number > 0) {
        int i = (int) (number % (long long) 10);
        if (i > smax && i != max) smax = i;
        number = number / 10;
    }
    return smax == -1 ? max : smax;
}

int itc_second_simple_max_num(long long number) {
    if (number / 10 == 0)return -1;
    int max = itc_max_num(number);
    int smax = -1;
    while (number > 0) {
        int i = (int) (number % (long long) 10);
        if (i > smax && i != max) smax = i;
        number = number / 10;
    }
    return smax;
}
