/* print three num in asending and desending order */
#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter the numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        if(b>c){
            printf("as order : %d %d %d",c,b,a);
            printf("ds order : %d %d %d",a,b,c);
        }
        else
        {
            printf("as order : %d%d%d",b,c,a);
            printf("ds order : %d%d%d",a,c,b);
        }
        
    }
    else if ((b>a)&&(b>c))
    {
        if (a>=c)
        {
            printf("as order : %d%d%d",c,a,b);
            printf("de order : %d%d%d",b,a,c);
        }
        else
        {
            printf("as order : %d%d%d",a,c,b);
            printf("ds order : %d%d%d",b,c,a);
        }        
    }
    else if ((c>a)&&(c>b))
    {
        if (a>=b)
        {
        printf("as order : %d%d%d",b,a,c);
        printf("ds orderr : %d%d%d",c,a,b);
        }
        else
        {
            printf("as order : %d%d%d",a,b,c);
            printf("de order : %d%d%d",c,b,a);
        }
        
    }
    else
    {
        printf("as order :");
        printf("ds order :");
    }
    
    
    return 0;
}
