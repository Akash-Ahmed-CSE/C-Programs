#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>edge[7+1];
    int ne,i;
    scanf("%d",&ne);
    for (i=1;i<=ne;i++)
    {
        int v,u;
        scanf("%d %d",&v,&u);
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    int v1;
    for (v1=0;v1<=7;v1++)
    {
        int l=edge[v1].size();
        for(i=0;i<l;i++)
        {
            printf("%d ",edge[v1][i]);
        }
        printf("\n");
    }
    return 0;
}
