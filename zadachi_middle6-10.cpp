#include <iostream>
#include "middle.h"

using namespace std;

int itc_min_num(long long number) { //6
    if (number < 0)
        number *= -1;
    if (number == 0)
        return 0;
    int minch = 9, a;
    while (number > 0) {
        a = number % 10;
        if (a < minch)
            minch = a;
        number /= 10;
    }
    return minch;
}

int itc_rev_num(long long number) { //7
    int Zifra, summa = 0;
    if(number == 0)
        return 1;
    if(number < 0)
        number *= -1;
    long long rev = 0;
    while(number > 0){
        Zifra = number % 10;
        rev = rev * 10 + Zifra;
        number /= 10;
    }
    while(rev > 0){
        summa += 1;
        rev /= 10;
    }
    return summa;
}

int itc_null_count(long long number) { //8
    if (number < 0)
        number *= -1;
    if (number == 0)
        return 1;
    int nuli = 0;
    while (number > 0) {
        if (number % 10 == 0)
            nuli++;
        number /= 10;
    }
    return nuli;
}

bool itc_mirror_num(long long number) { //9
    long long revnum = 0;
    long long a = number;
    while (a > 0) {
        revnum = revnum * 10 + a % 10;
        a /= 10;
    }
    if (revnum == number)
        return true;
    else
        return false;
}

int itc_mirror_count(long long number){ //10
    int n = 0;
    for (int i = 1; i <= number; i++){
        if(i == itc_rev_num2(i)){
            ++n;
        }
    }
    return n;
}
