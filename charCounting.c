//
// Created by ab on 18/02/21.
//
#include <stdio.h>

// count characters in input; 2nd version

int main(void) {
    double nc = 0;
    int m;
    for(nc=0;(m=getchar())!=EOF;nc++) {
        if(m=='\n'){
            --nc;
        }
    }
    printf("%.0f\n",nc);
}

