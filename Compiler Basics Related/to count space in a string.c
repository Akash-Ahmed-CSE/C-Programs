#include<stdio.h>
int main()
{
    char str[50];
    int count=0;
    printf("Enter a Line of String: \n");
    gets(str);
    for(int i=0;str[i];i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }
    printf("%d white spaces found. \n", count);
    return 0;
}

