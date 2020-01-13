
/*while and do while*/
/*print number i to n using while*/

#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int i=1,n;
    printf("enter the num : ");
    scanf("%d", &n);
    while(i<n)
    {
        printf("%d", i);
        i++;
    }
    return 0;
}
