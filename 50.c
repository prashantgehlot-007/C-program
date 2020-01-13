/* accepting array element and re print*/
#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int n,i,a[20];
    printf("enter number..");
    scanf("%d",&n);
    printf("enter array element:\n");
    for(i=0;i<=n;i++)
    {
        printf("enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nelement %d:%d",i+1,a[i]);
    }

    return 0;
}
