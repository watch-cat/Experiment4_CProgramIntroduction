//
// Created by matebook x pro on 2022/3/29.
//
#include <stdio.h>
#include <math.h>

int main() {

    int num,digit,lastDigit,ans = 0;
    scanf("%d",&num);
    //通过求数字以10为底的对数，获取位数
    digit = (int)log10(num) + 1;
    for (int i = 1; i <= digit; ++i) {
        lastDigit = num % 10;
        ans += lastDigit * pow(10,digit - i);
        num /= 10;
    }
    printf("%d",ans);

    return 0;
}

