#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n;
    char ch[50];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %d",&ch,&j);
        if (!strcmp(ch,"Thor")) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}

