/*print max and min element of a given array*/
#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int i,n,a[20],max,min;
    printf("enter number..");
    scanf("%d",&n);
    printf("enter array element..\n");
    for(i=0;i<n;i++)
    {
        printf("ener elements %d :",i+1);
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];

        if(a[i]<min)
        min=a[i];
    }
    printf("\nmin:%d",min);
    printf("\nmax:%d",max);
    return 0;
}
