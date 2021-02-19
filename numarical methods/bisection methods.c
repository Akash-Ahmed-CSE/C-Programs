#include<stdio.h>
#include<math.h>
int main()
{
    int k=1;
    float a,b,x,fa,fx,flag;
    scanf("%f%f",&a,&b);
    printf("\nn\ta\t\tb\t\tx\t\tf(x)\n");
    printf("\n----------------------------------------------------------------------\n");
    while(fabs(a-b)>.001){
        fa=a*a*a-a-1;///change the equation according to your use ->  y=x^3-x-1;
        x=(a+b)/2;
        fx=x*x*x-x-1;///change it too
        printf("\n%d\t%f\t%f\t%f\t%f\n",k,a,b,x,fx);
        flag=fa*fx;
        if(flag>0)a=x;
        else if (flag<0)b=x;
        else break;
        k++;
    }
    return 0;
}
