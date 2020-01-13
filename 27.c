/*calculae sum f number*/
#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int rem,sum=0,n;
    printf("enter the num : ");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n%10;
        sum = sum +rem;
        n = n/10;
    }
    printf("the sum of number is : %d", sum);
    return 0;
}
