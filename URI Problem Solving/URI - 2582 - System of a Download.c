#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    for (i=0;i<n;i++){
     scanf("%d %d",&a,&b);
     c=a+b;
     if (c==0)printf("PROXYCITY\n");
     if (c==1)printf("P.Y.N.G.\n");
     if (c==2)printf("DNSUEY!\n");
     if (c==3)printf("SERVERS\n");
     if (c==4)printf("HOST!\n");
     if (c==5)printf("CRIPTONIZE\n");
     if (c==6)printf("OFFLINE DAY\n");
     if (c==7)printf("SALT\n");
     if (c==8)printf("ANSWER!\n");
     if (c==9)printf("RAR?\n");
     if (c==10)printf("WIFI ANTENNAS\n");
    }
    return 0;
}

