#include <stdio.h>

int main()
{
    int i, m, n;
    printf("\n Enter the values of m and n respectively:");
    scanf(" %d %d", &m, &n);

    for(i=m;n>=i;i++)
    {
        if (i%2==0)
        printf("%d\n", i);
    }

    return 0;
}
