#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<10)
    {
        if(n==1 || n==7)
        {
            printf("True");
        }
    }
    else
    {
        int ld=0,g,e;
        while(n>9)
        {
            ld=0;
            while(n!=0)
            {
                e=n%10;
                g=e*e;
                ld=ld+g;
                n=n/10;
            }
            n=ld;
        }
        if(n==1 || n==7)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }

    }
}