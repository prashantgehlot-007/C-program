#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter number..");
    scanf("%1d",&n);
    switch(n)
    {
        case 0: printf("zero");break;
        case 1: printf("one");break;
    }
    return 0;
}
