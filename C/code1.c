//Enter the temperature in celsius and convert that into fahrenheit
#include<stdio.h>
int main()
{
float c,f;
printf("Enter the temperature in Celsius\n");
scanf("%f",&c);
f=(1.8 *c) + 32;
printf("fahrenheit=%f",f); 
    
}