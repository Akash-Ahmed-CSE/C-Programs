#include<stdio.h>
#include<string.h>
int main()
{
    char a[9999], b[9999];
    int i=0, j, m=0,s=0; unsigned int l;
    printf("Enter string with comments:\n");
    scanf("%[^_]",a);
    l = strlen(a);
    for(j=0 ; j<=l-1 ; j++){
        if(a[j]=='/' && a[j+1]=='*'){    //Check for Multiple Line Comment
            j+=2;
            m++;
            while(a[j]!='*' && a[j+1]!='/'){
                b[i]=a[j];
                i++;
                j++;
            }
        }
    }
    for(j=0 ; j<=l-1 ; j++){
        if(a[j]=='/' && a[j+1]=='/'){    //Check for Single Line Comment
            j+=2;
            s++;
            while(a[j]!='\n'){
                b[i]=a[j];
                i++;
                j++;
            }
        }
    }
    b[i]='\0';
    printf("Comment Line Count: \n");
    printf("Multiple Line Comment is %d lines.\n",m);
    printf("Single Line Comment is %d lines.\n",s);
    printf("Comment: %s\n",b);
    return 0;
}

