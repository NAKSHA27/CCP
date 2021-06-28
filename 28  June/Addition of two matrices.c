#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, r, c, a[10][10], b[10][10];
    int add[10][10];

    printf("Enter the number of rows and columns:");
    scanf("%d %d", &i, &j);

    printf("\n Enter the elements of first matrix:");
    for(r=0;r<i;r++)
    {
        for(c=0;c<j;c++)
        {
            scanf("%d", &a[r][c]);
        }
    }


    printf("\n Enter the elements of second matrix:");
     for(r=0;r<i;r++)
    {
        for(c=0;c<j;c++)
        {
            scanf("%d", &b[r][c]);
        }
    }
   for(r=0;r<i;r++)
    {
        for(c=0;c<j;c++)
        {
            add[r][c] = a[r][c] + b[r][c];
        }
    }
    printf("The sum of two matrices a and b = a + b\n");
     for(r=0;r<i;r++)
    {
        for(c=0;c<j;c++)
        {
            printf("%d\t", add[r][c]);
        }
        printf("\n");
    }
    return 0;
}

