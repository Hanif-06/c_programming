#include <stdio.h>
#include <conio.h>
int main ()
{
    float a,b,area,perimeter;
    printf("Enter the value of a and b:");
    scanf("%f%f",&a,&b);
    area=a*b;
    perimeter=2*(a+b);
    printf("The area is %.2f\n",area);
    printf("The perimeter is %.2f\n",perimeter);
    return 0;
    getch();
}

