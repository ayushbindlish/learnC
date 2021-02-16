//
// Created by ab on 16/02/21.
//
#include <stdio.h>
// copy input to output 1st version
int main() {
    int c;
    c = getchar();
    while(c != EOF){
        putchar(c);
        c=getchar();
    }
    return 0;
}
