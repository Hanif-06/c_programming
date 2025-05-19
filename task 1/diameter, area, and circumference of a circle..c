#include <stdio.h>
#define pi 3.1416
int main ()
{
    float r,d,area,c;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    d=r*2;
    area=pi*r*r;
    c=2*pi*r;//here, c is the circumference
    printf("Diameter=%.2f\nArea=%.2f\nCircumference=%.2f",d,area,c);
    return 0;

}
