#include <stdio.h>
int avg1(int,int,int);
int main()
{
    int a,b,c,avg;

    printf("Enter the values of three numbers/n:");
    scanf("%d%d%d", &a, &b, &c);

    avg=avg1(a,b,c);
    printf("average number is %d",avg);

    return 0;
}
  int avg1(int a, int b , int c){
      int s;
      s = (a+b+c)/3;
      return s;
}
