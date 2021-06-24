#include<stdio.h>
int main()
{
int X,H,F,T,TEN,FIVE,TWO,ONE;
scanf("%d",&X);
printf("%d\n",X);
H = X / 100;
X = X % 100;
F = X / 50;
X = X % 50;
T = X / 20;
X = X % 20;
TEN = X / 10;
X = X % 10;
FIVE = X / 5;
X = X % 5;
TWO = X / 2;
X = X % 2;
ONE = X;
printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",H,F,T,TEN,FIVE,TWO,ONE);

return 0;
}
