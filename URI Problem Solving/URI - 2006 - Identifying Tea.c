#include <stdio.h>
int main()
{
    int n,i,m,s=0;
    scanf("%d",&n);
    for(i=0;i<5;i++){
        scanf("%d",&m);
        if(m==n) s++;
    }
    printf("%d\n",s);
    return 0;
}

