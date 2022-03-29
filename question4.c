//
// Created by matebook x pro on 2022/3/29.
//
#include <stdio.h>

int main() {

    double n,ans = 0,motherFront1 = 0,motherFront2 = 1,sonFront1 = 1,sonFront2 = 1,t;

    scanf("%lf",&n);
    for (int i = 0; i < n; ++i) {
        ans += (sonFront1+sonFront2)/(motherFront1+motherFront2);

        t = motherFront2;
        motherFront2 = motherFront1 + motherFront2;
        motherFront1 = t;

        t = sonFront2;
        sonFront2 = sonFront1 + sonFront2;
        sonFront1 = t;
    }

    printf("%.3lf",ans);

    return 0;
}

