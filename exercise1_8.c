//
// Created by ab on 18/02/21.
//
#include <stdio.h>


// count number of blanks, tabs and newlines
//Exercise 1-8 pg 20
int main(void) {
    int c;
    int nl,tb,b = 0;
    nl=tb=b=0;
    while((c=getchar())!=EOF)
        if (c=='\n')
            ++nl;
        else if(c=='\t')
            ++tb;
        else if(c==' ')
            ++b;
    printf("nl:%d \t tb:%d \t b:%d",nl,tb,b);
    return 0;

}

