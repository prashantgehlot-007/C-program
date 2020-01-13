/* compare two num*/
#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter the numbers : ");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("a is greater %d",a);
    else if (b>a)
    printf("b is greater %d",b);
    else
    printf("both are equal");
    return 0;
}
