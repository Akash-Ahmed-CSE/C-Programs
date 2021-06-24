#include<stdio.h>
int main()
{
    int N,a,b,c;
    scanf("%d",&N);
    a=N/365;
    N=N%365;
    b=N/30;
    c=N%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,b,c);
    return 0;
}

