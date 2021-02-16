//
// Created by ab on 16/02/21.
//
#include <stdio.h>
// defining symbolic constants
#define LOWER 0    // lower limit
#define UPPER 300  // upper limit
#define STEP 20   // step size
/* Print Fahrenheit-Celsius table for
 * fahr = 0,20,...,300 */

int main() {
   int fahr;
   printf("Fahr Celsius\n");
   for(fahr = LOWER; fahr<= UPPER; fahr+=STEP) {
       printf("%3.0f %6.1f\n",fahr, (5.0/ 9.0) * (fahr-32));
   }
}