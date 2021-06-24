#include<stdio.h>
int main()
{
    int i,j,n,x,y,k=0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if (x%2==0)x++;
        for (j=0;j<y;j++){
            k=k+x;
            x=x+2;
        }
        printf("%d\n",k);
        k=0;
    }
    return 0;
}

