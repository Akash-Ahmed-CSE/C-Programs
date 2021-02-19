#include <stdio.h>
int main()
{
    char s[100];
    int vwl=0, cnsnt=0, dgt=0, chrctr=0;
    printf("Enter a Line of String:\n");
    gets(s);
    for(int i=0; s[i]; i++)
    {
        if(s[i]>=48 && s[i]<=57)
            dgt++;
        if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
        {
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
                vwl++;
            else
                cnsnt++;
        }
        else chrctr++;
    }
    printf("\nNumber of Vowels = %d\n",vwl);
    printf("Number of Consonants = %d\n",cnsnt);
    printf("Number of Digits = %d\n",dgt);
    printf("Number of Special Characters = %d\n",chrctr);
    return 0;
}

