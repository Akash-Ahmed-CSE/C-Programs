#include<stdio.h>
int main()
{
    int n,r,c,t[10][10],sum=0;
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (r=0;r<n;r++){
        for (c=0;c<n;c++){
            scanf("%d",&t[r][c]);
            sum=sum+t[r][c];
        }
    }

    printf("%d\n",sum);
    return 0;
}
