#include<stdio.h>
#include<conio.h>

int square(int x)
{
    return(x*x);
}

int cube(int x)
{
    return(x*x*x);
}

int main(int argc, char const *argv[])
{
    int n;
    printf("enterr the number...");
    scanf("%d",&n);
    printf("\nsquare :%d\n",square(n));
    printf("\ncube :%d\n",cube(n));
    cube(n);
    return 0;
}
