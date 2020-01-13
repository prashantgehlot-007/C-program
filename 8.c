/* simple interst */
#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    float SI,P,N,R;
    printf("enter the value of P, N, R: ");
    scanf("%f%f%f", &P,&N,&R);
    SI = (P*N*R)/100;
    printf("simple interst is = : %6.2f", SI);

    return 0;
}
