//
// Created by ab on 16/02/21.
//
#include <stdio.h>
/* Print Fahrenheit-Celsius table for
 * fahr = 0,20,...,300 */

int main() {
   int fahr, celsius;
   int lower, upper, step;

   lower = 0; // lower limit of temperature table
   upper = 300; // upper limit of temperature table
   step = 20; // step size

   fahr = lower;
   printf("Fahr Celsius\n");
   while(fahr<=upper) {
       celsius = 5 * (fahr-32) / 9;
       printf("%d\t%d\n",fahr, celsius);
       fahr+=step;
   }
}