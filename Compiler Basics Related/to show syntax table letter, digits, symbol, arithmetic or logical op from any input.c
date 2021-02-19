#include<stdio.h>
int main()
{
    char str[100], di[100], le[100], pu[100], aop[100], lop[100];
    int i=0,j=0,k=0,l=0,a=0,x=0;
    printf("Enter a Line of String with Syntax's: \n");
    gets(str);
    while(str[a]!='\0')
    {
        if(str[a]>='0'&&str[a]<='9')
        {
            di[i++]=str[a];
        }
        else if((str[a]>='A'&&str[a]<='Z')||(str[a]>='a'&&str[a]<='z'))
        {
            le[j++] =str[a];
        }
        else if(str[a]=='+'||str[a]=='-'||str[a]=='*'||str[a]=='/')
        {
            aop[k++]=str[a];
        }
        else if(str[a]=='='||str[a]=='&'||str[a]=='|'||str[a]=='!')
        {
            lop[x++]=str[a];
        }
        else
        {
            pu[l++]=str[a];
        }
        a++;
    }
    lop[x]='\0';
    di[i]='\0';
    le[j]='\0';
    aop[k]='\0';
    pu[l]='\0';
    printf("Letters are '%s'.\n",le);
    printf("Digits are '%s'.\n",di);
    printf("Symbols are '%s'.\n",pu);
    printf("Arithmetic Operators are '%s'.\n",aop);
    printf("Logical Operators are '%s'.\n",lop);
    return 0;
}

