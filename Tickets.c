#include<stdio.h>
int main()
{
    int  x,total;
    scanf("%d",&x);
    total=4 * x;
    if(total<=1000)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}