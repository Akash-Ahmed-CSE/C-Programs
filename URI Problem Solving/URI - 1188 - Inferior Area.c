#include<stdio.h>
int main()
{
    double A[12][12],sum=0;
    char X[2];
    scanf("%c",&X);
    int i,p=5,q=6,j;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&A[i][j]);
        }
    }

    for(i =7;i<12;i++){
        for(j=p;j<=q;j++){
            sum+=A[i][j];
        }
        p--;
        q++;
    }
    if(X[0]=='S') printf("%.1lf\n",sum);
    else if (X[0]=='M')printf("%.1lf\n",sum/30.0);
    return 0;
}





