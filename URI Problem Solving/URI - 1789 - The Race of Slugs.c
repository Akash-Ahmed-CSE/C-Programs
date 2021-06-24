#include<stdio.h>
int main()
{
    int n,s,i,l,k;
    while(scanf("%d",&n)!=EOF){
            k=0;
        for(i=0;i<n;i++){
            scanf("%d",&s);
            if(s>=k) k=s;
        }
        if(k<10) l=1;
        else if(k<20) l=2;
        else l=3;
        printf("%d\n",l);
    }

    return 0;
}

