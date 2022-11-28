#include "middle.h"

#include <iostream>

using namespace std;

void itc_num_print(int number) {
    cout << number << endl;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

long long int itc_reverse(long long int number) {
    long long num = 0;
    if (number < 0)
        number *= -1;
    while (number > 0) {
        num = num * 10 + number % 10;
        number /= 10;
    }
    return num;
}