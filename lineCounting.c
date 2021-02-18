//
// Created by ab on 18/02/21.
//

// lineCounting 1st Version
#include <stdio.h>

#define NAME "AYUSH"

// count number of lines
int main(void) {
    int c ,nl;
    nl=0;
    while((c=getchar())!=EOF)
        if (c=='\n')
            ++nl;
    printf("%d\n",nl);
    return 0;

}
