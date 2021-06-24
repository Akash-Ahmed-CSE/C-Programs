#include<stdio.h>
int main()
{
    int  i,j;
    long long int N[60];
    N[0]=0;
    N[1]=1;
    for (i=2;i<61;i++){
        N[i]=N[i-1]+N[i-2];
    }
    int t,k;
    scanf("%d",&t);
    for(j=0;j<t;j++){
        scanf("%d",&k);
        printf("Fib(%d) = %lld\n",k,N[k]);
    }

    return 0;
}

