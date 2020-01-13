/*first even num using while */
#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int i=2,n;
    printf("enter the num : ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\t",i);
        i =i+2;
    }
    return 0;
}

 