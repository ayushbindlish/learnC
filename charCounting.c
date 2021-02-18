//
// Created by ab on 18/02/21.
//
#include <stdio.h>

// count characters in input; 1st version

int main(void) {
    long nc = 0;
    int m;
    while((m = getchar())!=EOF) {
        if(m!='\n'){
            ++nc;
        }
    }
//    ++nc;
    printf("%ld\n",nc);
}

