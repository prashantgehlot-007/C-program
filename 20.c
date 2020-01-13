/* take input number of student find average then grade them*/
/* user maritail statue */
#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int age;
    char ms,g;
    printf("enter the values : ");
    scanf("%c,%c,%d",ms,g,age);
    if (ms == 'ma')
    {
        printf("cant marry");
    }
    else if (ms == 'nm')
    {
        if (g=='m')
        {
            if (age < 30)
            {
                printf("marry");
            }
            else
            {
                printf("no marry");
            }    
        }
        else if (g == 'f')
        {
            if (age<25)
            {
                printf("marry");
            }
            else
            {
                printf("no marry");
            }
            
        }
        else
        {
            printf("incalid gender");
        }
        
    }
    else
    {
        printf("invalid ms");
    }
    
    return 0;
}
