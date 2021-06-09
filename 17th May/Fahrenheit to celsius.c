#include<stdio.h>

int main()
{
    float fahrenheit, celsius;

    printf("Enter the value of temperature  in fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (5.0/9) * (fahrenheit - 32);

    printf("%.2f°F is same as %.2f°C", fahrenheit, celsius);

    return 0;
}
