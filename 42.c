#include<stdio.h>
#include<conio.h>

/*int marks[7];8*/
int average[5];

int marks[7] = {10,20,30,40,50,70};
int avaerage[] = {1,2,3,4,5};

int main(int argc, char const *argv[])
{
    printf("%d",marks[2]);
    /*total = marks[2] + marks[5];*/
    /*printf("%d",&total);*/
    for(int i=0;i < 7;i++)
    {
        total = total + marks[i];
    }
    return 0;
}

