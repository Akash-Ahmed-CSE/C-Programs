#include<stdio.h>
#include<string.h>

int main()
{
    int i, len;
    char num[1000000];
    gets(num);
    len = strlen(num);
    for(i=len-1; i>=0; i--)
        num[len++]=num[i];
    printf("%s",num);
    return 0;
}
