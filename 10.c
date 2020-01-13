/*#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int roll_no,m1,m2,m3,total;
    float avg;
    printf("enter the roll no : ");
    scanf("%d", roll_no);
    printf("enter marks m1 m2 m3 : ");
    scanf("%d%d%d", &m1,&m2,&m3);
    total = m1+m2+m3;
    avg = total/3;
    printf("\n total : %d \n avg : %f",total,avg );

    return 0;
}*/


#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int a,b,temp;
    printf("enter the values : ");
    scanf("%d%d", &a,&b);
    printf("\nbefore swapping values is a = %d,b =%d", a,b);
    a = temp;
    a = b;
    b = temp;
    printf("\nthe new values is \na = %d, b =%d",a,b);
    return 0;
}
