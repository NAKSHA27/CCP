#include <stdio.h>
#include<math.h>

float AreaofaTriangle(float,float,float);
int main()
{
    float a, b, c, Area;

    printf("Enter the three sides of a triangle/n:");
    scanf("%f%f%f",&a,&b,&c);

    Area= AreaofaTriangle(a,b,c);

    printf("\nArea of a triangle=%.2f\n",Area);
    return 0;


}
 float AreaofaTriangle(float a, float b, float c){

     float s, Area;
     s = (a+b+c)/2;
     Area = sqrt(s*(s-a)*(s-b)*(s-c));
     return Area;
}





