#include<stdio.h>
int main()
{
    int i,len;
    char ch[100];

   scanf("%s",&ch);
    len=0;
    while(ch[len]!='\0')
    {
        len++;
    }
    printf("%d",len);
    return 0;
}
