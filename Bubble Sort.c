#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sc=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            sc++;
            }
        }
    }
    printf("Number of swaps: %d\n",sc);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}