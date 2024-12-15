#include<stdio.h>
int main()
{
    char str[20],i,c=0,c2=0;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]=='z')
        {
            c=c+1;
        }
        else if(str[i]=='o')
        {
            c2=c2+1;
        }
    }
    if(2*c==c2)
    {
        printf("Yes");

    }
    else{
        printf("No");
    }
}