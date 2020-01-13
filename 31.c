#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,n;
    printf("enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    }
    printf("\n");
    return 0;
}
