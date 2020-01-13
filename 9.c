/* square and cube of a given no.*/
#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int n,square,cube;
    printf("enter the number : ");
    scanf("%d", &n);
    square = n*n;
    cube = n*n*n;
    printf("\nsq: %d \ncub: %d",square,cube);
    return 0;
}
