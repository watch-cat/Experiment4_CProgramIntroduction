//
// Created by matebook x pro on 2022/3/29.
//
#include <stdio.h>

int main() {

    double n = 1,m,ans = 0;
    do {
        m = 1 / (n * 2 -1);
        if ((int )n % 2 == 1) ans += m;
        else ans -= m;
        ++n;
    } while (m > 0.000001);

    ans *= 4;
    printf("pi=%10.4lf",ans);

    return 0;
}

