//
// Created by matebook x pro on 2022/3/29.
//
#include <stdio.h>

int main() {

    int k,ans = 0,numOfNum = 0;

    scanf("%d",&k);
    for (int i = k; i >12 ; --i) {
        if (i%13 == 0 || i%17 == 0){
            ans += i;
            ++numOfNum;
            if (numOfNum >= 10) break;
        }
    }
    printf("%d",ans);

    return 0;
}

