/* print fibonacci series using arry */
#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int a[20],i,n;
    printf("enter number..");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;

    for(i=2;i<n;i++)
    a[i] = a[i-1] + a[i-2];

    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}
