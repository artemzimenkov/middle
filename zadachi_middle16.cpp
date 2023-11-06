#include <iostream>
#include "middle.h"

using namespace std;

int itc_rev_oct_num(long long number){  //16

    int des_chislo = 0;
    int stepen_vosmerki = 1;
    while (number > 0) {
        int bit = number % 10;
        des_chislo += bit * stepen_vosmerki;
        number /= 10;
        stepen_vosmerki *= 8;
    }
    return des_chislo;
}

int itc_rev_num2(long long number){
    if (number < 0)
        number *= -1;
    int rev = 0;
    while(number != 0) {
        rev = rev * 10 + number % 10;
        number /= 10;
    }
    return rev;
}
