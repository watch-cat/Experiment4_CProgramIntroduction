//
// Created by matebook x pro on 2022/3/28.
//
#include <stdio.h>

long long factorialCulc(int num){
    long long result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }

    return result;
}

int main() {

    int n;
    long double ans = 1;
    scanf("%d",&n);
    if (n > 60) printf("2.71828183");
    else {
        for (int i = 1; i <= n; ++i) {
            ans += (1/(long double )factorialCulc(i));
        }
        printf("%.8Lf",ans);
    }


    return 0;
}

