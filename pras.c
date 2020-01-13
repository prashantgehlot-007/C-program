#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    for(i=0;i<10;i++)
    {
        printf("enter the element at a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<9;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf(" sorted list is");
    for(i=0;i<10;i++)
    {
        printf("\t%d",a[i]);
    }
}