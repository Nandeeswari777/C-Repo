#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0,m=0;
    for(int y=103;y>=1;y--)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==y)
            {
                c++;
            }
        }
        if(c==1)
        {
            m++;
            printf("%d",y);
            break;
        }
    }
    if(m==0)
    {
        printf("-1");
    }
}