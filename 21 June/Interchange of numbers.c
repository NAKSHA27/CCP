#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, a[10], temp;
    int min, min_pos;
    int max, max_pos;
    printf("\n Enter the number of elements:");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter the value of the element %d: ", i);
        scanf("%d", &a[i]);

    }
    min=a[0];
    min_pos=0;
    max=a[0];
    max_pos=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {

        min = a[i];
        min_pos = i;
        }
        if(a[i]>max)
        {
         max = a[i];
         max_pos = i;
        }
    }
    printf("\n The smallest of these numbers is:%d", min);
    printf("\n The position of the smallest in the array is:%d", min_pos);
    printf("\n The largest of these numbers is:%d", max);
    printf("\n The position of the largest in the array is:%d", max_pos);

    temp=a[max_pos];
    a[max_pos]=a[min_pos];
    a[min_pos]=temp;
    printf("\n The newly formed array: ");
    for(i=0;i<n;i++)
    printf("\n %d", a[i]);
    return 0;





    return 0;
}

