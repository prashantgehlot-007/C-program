#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("enter number : ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("not prime");
            exit(0);
        }
    }
    printf("prime");
    return 0;
}
