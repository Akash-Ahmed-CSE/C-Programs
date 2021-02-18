#include<stdio.h>
int main()
{
    int n,r,c,sum=0,m[10][10];
    scanf("%d",&n);
    for (r=0;r<n;r++){
        for (c=0;c<n;c++){
            scanf("%d",&m[r][c]);
        }
    }
    for (r=0;r<n;r++)
    {
        sum=sum+m[r][r];
    }
    printf("The sum of all diagonal elements are: %d\n",sum);
    return 0;
}
