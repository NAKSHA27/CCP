#include <stdio.h>

int main()
{
    int i, m, n;
    printf("\n Enter the value of m:");
    scanf("%d", &m);
    printf("\n Enter the value of n:");
    scanf("%d", &n);
    for(i=m;n>=i;i++)
    {
        if (i%2==0)
        printf("%d\t", i);
    }

    return 0;
}
