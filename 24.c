/*print first odd number*/
#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int i=1,n;
    printf("enter the number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\t",i);
        i= i+2;
    }
    return 0;
}
