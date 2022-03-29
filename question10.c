//
// Created by matebook x pro on 2022/3/29.
//
#include <stdio.h>
#include <math.h>

int main() {

    //用一个数组存储已计算过的所有质数，降低计算成本
    int primeNumber[200],numOfPrimeNum,outputCount = 0;
    primeNumber[0] = 2;
    primeNumber[1] = 3;
    numOfPrimeNum = 2;

    //除2，3外的质数，都分布在6的倍数左右
    for (int i = 6; i < 200; i += 6) {
        for (int j = 0; j < numOfPrimeNum; ++j) {
            if ((i - 1) % primeNumber[j] == 0) break;
            //数字的质因数只会出现在小于等于其算术平方根的范围内
            if (primeNumber[j] >= sqrt(i - 1)){
                primeNumber[numOfPrimeNum] = i - 1;
                numOfPrimeNum++;
                if ((i - 1) > 100) {
                    printf("%5d", i - 1);
                    ++outputCount;
                    if (outputCount == 8){
                        printf("\n");
                        outputCount = 0;
                    }
                }
                break;
            }
        }

        for (int j = 0; j < numOfPrimeNum; ++j) {
            if ((i + 1) % primeNumber[j] == 0) break;
            if (primeNumber[j] >= sqrt(i + 1)){
                primeNumber[numOfPrimeNum] = i + 1;
                numOfPrimeNum++;
                if ((i - 1) > 100) {
                    printf("%5d", i + 1);
                    ++outputCount;
                    if (outputCount == 8){
                        printf("\n");
                        outputCount = 0;
                    }
                }
                break;
            }
        }
    }

    return 0;
}

