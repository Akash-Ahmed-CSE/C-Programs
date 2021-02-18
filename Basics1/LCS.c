
#include<stdio.h>
#include<String.h>
char x[20],y[20],b[20][20];
int i,j,m,n,c[20][20];

void lcs();
void print(int i,int j);

int main()
{
    printf("\nEnter your first String: ");
    scanf("%s",&x);

    printf("\nEnter your second String: ");
    scanf("%s",&y);

    printf("\n The Longest common Subsequence is: ");
    lcs();
    print(m,n);
    return 0;
}

void lcs()
{
    m=strlen(x);
    n=strlen(y);

    for(i=0; i<=m; i++)
        c[i][0]=0;

    for(j=0; j<=n; j++)
    {
        c[0][i]=0;
    }

    for(i=0; i<=m; i++)
        for(j=0; j<=n; j++)
        {
            if(x[i-1]==y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='c';
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]='u';
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]='1';
            }
        }

}

void print(int i,int j)
{
    if(i==0||j==0)
        return;
    if(b[i][j]=='c')
    {
        print(i-1,j-1);
        printf("%c",x[i-1]);
    }
    else if(b[i][j]=='u')
    {
        print(i-1,j);
    }
    else
        print(i,j-1);
}





