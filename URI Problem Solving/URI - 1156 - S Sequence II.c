#include<stdio.h>
int main()
{
    int i;
    float S=0,j=1.0;
    for (i=1;i<=39;i=i+2){
        S=S+(i/j);
        j=j+j;
    }
    printf("%.2f\n",S);
    return 0;
}

