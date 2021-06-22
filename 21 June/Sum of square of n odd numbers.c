#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int i, n;
    int sum = 0;
    printf("\n Enter the value of n:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(i%2 != 0)
        sum = sum+pow(i,2);
    }
    printf("The sum of first n odd numbers is: %d ", sum);
    return 0;
}

