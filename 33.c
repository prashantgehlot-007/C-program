#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int i,fact = 1,n;
    printf("enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    fact = fact*i;
    printf("factorial of a number is %d",fact);
    return 0;
}
