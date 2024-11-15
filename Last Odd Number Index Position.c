#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int odd=-1;
    for(i=n-1;i>0;i--)
    {
        odd=i;
        break;
    }
    printf("%d",i);
}