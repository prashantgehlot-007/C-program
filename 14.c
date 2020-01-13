/* largest of two number*/
#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter numbers : ");
    scanf("%d%d",&a,&b);
    printf("initally no are a=%d,b =%d", a,b);
    if(a>b)
    printf("\nlarger no, is %d", a);
    else
    printf("\nlarger no. is %d", b);
    return 0;
}

/* same for no leas than a no.*/