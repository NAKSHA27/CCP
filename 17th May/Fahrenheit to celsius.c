#include<stdio.h>

int main()
{
    float fahrenheit, celsius;

    printf("\n\nEnter the value of temperature  in fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (5.0/9) * (fahrenheit - 32);

    printf("Temperature in degree celsius is %.2f", celsius);

    return 0;
}
