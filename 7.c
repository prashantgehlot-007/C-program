/* area of traingle */
#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    float b,h, area;
    printf("enter base : ");
    scanf("%f", &b);
    printf("enter height : ");
    scanf("%f", &h);
    area = 0.5*b*h;
    printf("ans is %f", area);
    return 0;
}
