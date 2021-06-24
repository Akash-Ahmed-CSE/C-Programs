#include<stdio.h>
int main()
{
    double A[12][12],sum;
    char X[2];
    scanf("%c",&X);
    int i,j;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&A[i][j]);
        }
    }

    for(i = 1;i < 12;i++){
        for(j=0;j<i;j++)
            sum+=A[i][j];

    }
    if(X[0]=='S') printf("%.1lf\n",sum);
    else if (X[0]=='M')printf("%.1lf\n",sum/66.0);
    return 0;


}
