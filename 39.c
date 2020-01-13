#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    float sum=0,fact=1;
    printf("enter value..");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i+1;j++)
        fact = fact+j;
        sum = sum + i/fact;
    }
    printf("sum of series is %f",sum);
    return 0;
}
