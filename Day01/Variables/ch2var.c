#include <stdio.h>

int main(){

float temperature_c,temperature_k;

printf("write the temperature to be converted in kelvin :");
scanf("%f",&temperature_c);
temperature_k=temperature_c + 273.15 ;
printf("the temperature in kelvin is %0.2f Kelvin", temperature_k);
return 0;

}
