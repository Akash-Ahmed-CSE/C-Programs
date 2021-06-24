#include<stdio.h>
int main()
{
    int X,Y;
    float P;
    scanf("%d%d",&X,&Y);
    if (X==1)
    P=Y*4.00;
    else if (X==2)
    P=Y*4.50;
    else if (X==3)
     P=Y*5.00;
    else if (X==4)
     P=Y*2.00;
    else if (X==5)
     P=Y*1.50;
     printf ("Total: R$ %.2f\n",P);
    return 0;
}

