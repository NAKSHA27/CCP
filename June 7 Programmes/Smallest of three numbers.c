#include<stdio.h>
#include<conio.h>
int main()
{
    float num1, num2, num3, small;
    printf("Enter the values of three numbers : ");
    scanf("%f %f %f", &num1, &num2, &num3);
    if(num1<num2)
    {
        if(num2<num3)
            small = num1;
        else
        {
            if(num1<num3)
                small = num1;
            else
                small = num3;
        }
    }
    else
    {
        if(num2<num3)
            small = num2;
        else
            small = num3;
    }
    printf("\nSmallest number is: %f", small);

    return 0;
}























