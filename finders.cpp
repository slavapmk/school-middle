#include "middle.h"

int itc_second_max_num(long long number) {
    if (number < 0)number *= -1;
    if (number < 10)return -1;
    int max = itc_max_num(number);
    int smax = -1;
    while (number > 0) {
        if (smax < number % 10 && number % 10 != max)
            smax = (int) (number % (long long) 10);
        if (number % 10 == max)
            max = 10;
        number /= 10;
    }
    return smax;
}

int itc_second_simple_max_num(long long number) {
    if (itc_second_max_num(number) == itc_max_num(number))
        return -1;
    return itc_second_max_num(number);
}
