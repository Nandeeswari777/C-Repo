#include<stdio.h>
int main()
{
    char str[200];
    scanf("%[^\n]s",str);
    int i,j;
    int len=0,flag=0;
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    j=len-1;
    for(i=0;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}