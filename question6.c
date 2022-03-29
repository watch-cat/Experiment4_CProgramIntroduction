//
// Created by matebook x pro on 2022/3/29.
//
#include <stdio.h>

int main() {

    int i = 0,j = 0,num;

    do {
        scanf("%d",&num);
        if (num > 0) ++i;
        if (num < 0) ++j;
    } while (num != 0);
    printf("i=%d\nj=%d",i,j);

    return 0;
}

