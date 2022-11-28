#include "middle.h"

int itc_max_num(long long number) {
    if (number == 0) return 0;
    int maxInt = -1;
    if (number < 0) number *= -1;
    while (number > 0) {
        maxInt = max(int(number % (long long) 10), maxInt);
        number = number / 10;
    }
    return maxInt;
}

int itc_min_num(long long number) {
    if (number == 0) return 0;
    int maxInt = 10;
    if (number < 0) number *= -1;
    while (number > 0) {
        maxInt = min(int(number % (long long) 10), maxInt);
        number = number / 10;
    }
    return maxInt;
}

int itc_null_count(long long number) {
    if (number == 0) return 1;
    int i = 0;
    if (number < 0) number *= -1;
    while (number > 0) {
        int ch = int(number % (long long) 10);
        number = number / 10;
        if (ch == 0) i += 1;
    }
    return i;
}

bool itc_mirror_num(long long number) {
    return itc_rev_num(number) == number;
}

int itc_mirror_count(long long number) {
    int result = 0;
    for (int i = 0; i < number; ++i)
        if (itc_mirror_num(i))
            result++;
    return result;
}
