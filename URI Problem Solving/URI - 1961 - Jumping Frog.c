#include<stdio.h>
int main()
{
    int p,n,a,i,chake;
    while(scanf("%d %d",&p,&n)!=EOF)
    {
        int arr[n];
    chake=0;
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<n-1;i++){
            a=arr[i+1]-arr[i];
            if(a<0)a=a*-1;
            if(a>p){
                chake=5;
                break;
            }
        }
        if(chake==5)printf("GAME OVER\n");
        else printf("YOU WIN\n");
    }
    return 0;
}

