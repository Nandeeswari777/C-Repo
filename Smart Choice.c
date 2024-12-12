#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int pa=(500-2*x)+(1000-4*(x+y));
    int pb=(1000-4*y)+(500-2*(x+y));
    int mp;
    if(pa>pb)
    {
        mp=pa;
    }
    else
    {
        mp=pb;
    }
    printf("%d",mp);
}