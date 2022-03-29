//
// Created by matebook x pro on 2022/3/29.
//
#include <stdio.h>
#include <ctype.h>

int main(){

    int c,letters = 0,digits = 0,space = 0,others = 0;
    do {
        c = getchar();
        if (isdigit(c)) ++digits;
        else if (islower(c) || isupper(c)) ++letters;
        else if (isblank(c)) ++space;
        else if (c != '\n') ++others;
    } while (c != '\0' && c != '\n');

    printf("letters=%d\n""digits=%d\n""spaces=%d\n""others=%d",letters,digits,space,others);

    return 0;
}

