/*print positive and negative array elements separatly*/
#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int n,i,a[20];
    printf("enter number...");
    scanf("%d",&n);
    printf("enter array element..\n");
    for(i=0;i<n;i++)
    {
        printf("enter element %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n\nnegative element : \n");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        printf("\n%d",a[i]);
    }
    printf("\n\npositive element :\n");
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        printf("\n%d",a[i]);
    }
    return 0;
}
