#include<stdio.h>
int main()
{
    int i,j,m,n,count;

    while(scanf("%d %d",&n,&m)!=EOF){
    int a[m];
    count =0;
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<m-1;i++){
        j = a[i+1]-a[i];
        if(j<0) j*=-1;
        if (j>n){ count=5;
        break;
        }
    }
    if(count==5)printf("GAME OVER\n");
    else printf("YOU WIN\n");
    }
    return 0;
}
