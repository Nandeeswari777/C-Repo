#include<stdio.h>
int main()
{
    char str[100],i,sum=0;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            sum=sum+str[i]-48;
        }
    }
    printf("%d",sum);
}