#include <stdio.h>
#include <conio.h>
int main()
{
int num, digit_at_tens_place;

printf("\n Enter any number:");
scanf("%d", &num);
digit_at_tens_place = num % 100/10;
printf("\nThe digit at ten's place of %d is %d", num, digit_at_tens_place);
return 0;

}
