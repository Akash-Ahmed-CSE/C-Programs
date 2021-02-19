#include<stdio.h>
int main()
{
    int x, y=0; char a[9999];
    printf("Enter Lines of String:\n");
    scanf("%[^_]", a);
    for(x=0; a[x]!='\0'; x++)
        if(a[x]=='\n')
            y++;
    printf("%d lines given as String. \n", y);
    return 0;
}

