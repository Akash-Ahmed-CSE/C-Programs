#include<stdio.h>
int main()
{
    int i,PA,PB,T,y;
    double GA,GB;
    scanf("%d",&T);
    for(i=0;i<T;i++){
            y=0;
        scanf("%d %d %lf %lf",&PA,&PB,&GA,&GB);
        while(PA<=PB){
            PA = PA+((PA*GA)/100);
            PB = PB+((PB*GB)/100);
            y++;
            if (y>100){printf("Mais de 1 seculo.\n");
            break;
            }
        }
        if (y<=100)printf("%d anos.\n",y);
    }
    return 0;
}
