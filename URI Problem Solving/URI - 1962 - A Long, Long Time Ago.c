#include <stdio.h>
int main()
{
    int i,n,year;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&year);
        if (year>2015) printf ("%d A.C.\n",year-2014);
        else if (year <2015) printf("%d D.C.\n",2015-year);
        else printf ("1 A.C.\n");}
    return 0;
}

