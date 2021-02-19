#include<stdio.h>
int main()
{
    int count=0;
    char a[1000];
    printf("Enter a Line of String: \n");
    gets(a);
    for(int i=0 ; a[i] ; i++)
    {
        if(a[i]!=' ')
            count++;
    }
    printf("%d characters found without white spaces.\n", count);
    return 0;
}
