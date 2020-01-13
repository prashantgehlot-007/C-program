/* check a no. is positive */
#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter the number : ");
    scanf("%d", &a);
    if(a>0)
    printf("num is positive %d",a);
    else if(a<0)
    printf("num is negative %d",a);
    else
    printf("num is zero %d",a);
    return 0;
}
/* same for a no greater than other*/