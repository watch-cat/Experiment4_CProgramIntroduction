//
// Created by matebook x pro on 2022/3/29.
//
#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d*%d=%-4d",j,i,i*j);
        }
        if (i != n) printf("\n");
    }

    return 0;
}

