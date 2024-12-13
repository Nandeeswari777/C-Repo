#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d %d %d %d",&n,&k,&x,&y);
    int a=k*x;
    int b=(n-k)*x;
    int c=(n-k)*y;
    int u=a+b;
    int v=a+c;
    if(u<v)
    {
        printf("%d",u);
    }
    else
    {
        printf("%d",v);
    }
}