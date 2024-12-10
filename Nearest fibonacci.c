#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=1;
    int b=1;
    int c=0;
    while(c<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    int j=c-n;
    int u=n-a;
    if(j==u)
    {
        printf("%d %d",a,c);
    }
    else if(j>u)
    {
        printf("%d",a);
    }
    else{
        printf("%d",c);
    }
}