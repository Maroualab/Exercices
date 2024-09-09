#include <stdio.h>

int main(){

float Km_h,M_s;

printf("write the distance in km/h to be converted in m/s: ");
scanf("%f",&Km_h);
M_s = Km_h * 0.27778;
printf("the distance in m/s is : %0.4f ", M_s);
return 0;



}
