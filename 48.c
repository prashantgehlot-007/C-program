/*addition of array*/
#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int n,i,a[20],sum = 0;
    printf("enter number..");
    scanf("%d",&n);
    printf("enter elements: \n");
    for(i=0;i<=n;i++)
    {
        printf("enter elements %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum = sum + a[i];
        printf("\n sum of given array element is: %d",sum);
    }
        return 0;
}
