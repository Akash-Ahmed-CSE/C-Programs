#include<stdio.h>
#include <string.h>
int main()
{
    int n,i,l;
    char batman[100];
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%s",batman);
        l=strlen(batman);
        if (l>0 && l<=25)printf("Y\n");
    }
    return 0;
}

