/*cal the sum of given number*/
#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int n,newn,i,sum = 0;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("enter the numbers..\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",newn);
        sum = sum + newn;
    }
    printf("sum of number n digith number is %d",sum);
    return 0;
}
