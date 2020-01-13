/* calculate dicriminate to identify roots of qua equation */

#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    float a,b,c,x,r1,r2;
    printf("enter the values : ");
    scanf("%f%f%f",&a,&b,&c);
    x = b*b -4*a*c;
    r1 = (-b-x)/2*a*b;
    r2 = (-b+x)/2*a*b;
    if (x>0)
    {
        printf("roots are real");
    }
    else if (x<0)
    {
        printf("roots are imaginary");
    }
    else
    {
        printf("roots are equal");
    }
    printf("r1 : %f",r1);
    printf("r2 : %f",r2);

    return 0;
}
