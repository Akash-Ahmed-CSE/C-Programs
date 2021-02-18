#include<stdio.h>
int main()
{
 	int n, rows, columns, a[31][31];
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d",&n);
 	for(rows = 0; rows < n; rows++)
  	{
   		for(columns = 0;columns<n;columns++)
    	{
      		a[rows][columns]=0;
    	}
  	}
   int ne;
   scanf("%d",&ne);
   for (rows=0;rows<ne;rows++)
   {
       int u,v;
       scanf("%d %d",&u,&v);
       a[u][v]++;
       a[v][u]++;
   }
 	for (rows=0;rows<n;rows++){
        for (columns=0;columns<n;columns++){
            printf("%d ",a[rows][columns]);
        }
        printf("\n");
 	}
 	return 0;
}
