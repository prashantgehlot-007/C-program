#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int i=1,n;
    printf("enter the num : ");
    scanf("%d",&n);
    i=1;
    do
    {
        printf("%d\t",i);
        i = i+1;
    }while(i<=n);
    return 0;
}
