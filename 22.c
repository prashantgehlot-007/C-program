/* print 1 to n using do-while in reverse */
#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int i=1,n;
    printf("enter the num : ");
    scanf("%d",&n);
    i=n;
    do
    {
        printf("%d\t",i);
        i--;
    }while(i>=1);
    return 0;
}
