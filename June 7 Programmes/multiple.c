#include <stdio.h>

int main()
{
int num, i=1;
printf("Enter any number between 1 to 100\n: ");
scanf("%d", &num);
while(num*i <= 100){
printf("%d\n", num*i);
i+=1;
}
}
