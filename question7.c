//
// Created by matebook x pro on 2022/3/29.
//
#include <stdio.h>
#include <math.h>

int main() {

    int digit1,digit2,digit3;

    for (int i = 100; i < 1000; ++i) {
        digit1 = i/100;
        digit2 = i/10%10;
        digit3 = i%10;
        if (pow(digit1,3)+pow(digit2,3)+pow(digit3,3) == i){
            printf("%5d",i);
        }
    }

    return 0;
}

