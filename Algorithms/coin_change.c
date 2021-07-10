#include<stdio.h>
int main(){
int num_denominations,owed,coin_list[100],use_these[100],i,sum=0;
printf("Enter the number of denominations: ");
scanf("%d",&num_denominations);

printf("Enter the denominations in descending order:  ");
for(i=0;i<num_denominations;i++)
{
   scanf("%d",&coin_list[i]);
}

printf("\nEnter the amount owed: ");
scanf("%d",&owed);

for(i=0;i<num_denominations;i++)
{
    use_these[i]=owed/coin_list[i];
    owed%=coin_list[i];
}

printf("\nSolution: \n");
for(i=0;i<num_denominations;i++)
{
    printf("%d X %d \n",coin_list[i],use_these[i]);
}

for(i=0;i<num_denominations;i++)
{
    sum=sum+use_these[i];
}
printf("Total Number of Coins:%d ",sum);
}
