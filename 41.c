/*printing array in ascending and descending order*/
#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int n,j,i,a[20],max,min,temp;
    printf("enter number..");
    scanf("%d",&n);
    printf("enter element of array..");
    for(i=0;i<n;i++)
    {
        printf("enter element %d :",i+1);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        if(a[i]>a[j])
        {
            temp =a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }

printf("asending oreder..\n");
for(i=0;i<n;i++)
{
    printf("\t%d",a[i]);
}

min=a[0];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    if(a[i]<a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
printf("\ndesending order..\n");
for(i=0;i<n;i++)
{
    printf("\t%d",a[i]);
}
    return 0;
}
