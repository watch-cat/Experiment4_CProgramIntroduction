//
// Created by matebook x pro on 2022/3/28.
//
#include <stdio.h>

int main() {

    int n;
    double sum = 0;
    scanf("%d",&n);
    for (int i=1; i<=2*n-1; i+=2){
        sum = sum + ((double )1/i);
    }
    printf("sum = %lf",sum);

    return 0;
}

