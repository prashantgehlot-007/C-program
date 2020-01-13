/* check prime factorial fibbnoci series using function*/
#include<stdio.h>
#include<conio.h>

fact(int x)
{
    int i,fact = 1;
    for(i=1;i<=x;i++)
    fact = fact*i;
    printf("factorial is : %d",fact);
}

Isprime(int x)
{
    int i;
    for(i=2;i<=x-1;i++)
    {
        if(x%i==0)
        {
            printf("\nenter is not prime\n");
            return 0;
        }
    }
    printf("\nenter is a prime number\n");
}

fibbo(int x)
{
    int pre=0,cur=1,i,temp;
    printf("%d %d",pre,cur);
    for(i=3;i<x;i++)
    {
        temp = cur;
        cur = cur+pre;
        pre = temp;
        printf("%d",cur);
    }
}

int main()
{
    int n;
    printf("enter number...");
    scanf("%d",&n);
    fact(25);
    Isprime(25);
    fibbo(5);
    return 0;
}


