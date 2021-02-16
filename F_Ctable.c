//
// Created by ab on 16/02/21.
//
#include <stdio.h>
/* Print Fahrenheit-Celsius table for
 * fahr = 0,20,...,300 */

int main() {
   int fahr;
   printf("Fahr Celsius\n");
   for(fahr = 0; fahr<=300;fahr+=20) {
       printf("%3.0f %6.1f\n",fahr, (5.0/ 9.0) * (fahr-32));
   }
}