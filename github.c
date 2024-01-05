#include <stdio.h>
int main()
{
    float temp, result;

    printf("enter the temperature in celsius ");
    scanf("%f", &temp);
    result = temp*9/5+32;
    printf("The temperature is %f in Farenheight", result);
    return 0;
}