#include <stdio.h>
#define MAX 9999
int man_strcmp_func(const char *a, const char *b)
{
    while(*a)
    {
        if (*a != *b)
        {
            break;
        }
        a++;
        b++;
    }
    return *(const unsigned char*)a - *(const unsigned char*)b;
}
char *man_strtok_func(char *x, const char *y)
{
    static int pos;
    static char *s;
    int start = pos;
    if(x!=NULL)
    {
        s = x;
    }
    while(s[pos] != '\0')
    {
        int j = 0;
        while(y[j] != '\0')
        {
            if(s[pos] == y[j])
            {
                s[pos] = '\0';
                pos = pos+1;
                if(s[start] != '\0')
                    return (&s[start]);
                else
                {
                    start = pos;
                    pos--;
                    break;
                }
            }
            j++;
        }
        pos++;
    }
    s[pos] = '\0';
    if(s[start] == '\0')
        return NULL;
    else
        return &s[start];
}
int main()
{
    char arr[MAX];
    printf("Enter a Articled Line of String: \n");
    scanf("%[^\n]s",arr);
    int a = 0, an = 0, the = 0;
    char *tok = man_strtok_func(arr, " ");
    while(tok)
    {
        if(man_strcmp_func(tok, "an") == 0 || man_strcmp_func(tok, "An") == 0 || man_strcmp_func(tok, "AN") == 0)
        {
            an++;
        }
        if(man_strcmp_func(tok, "a") == 0 || man_strcmp_func(tok, "A") == 0)
        {
            a++;
        }
        if (man_strcmp_func(tok, "the") == 0 || man_strcmp_func(tok, "The") == 0 || man_strcmp_func(tok, "THE") == 0)
        {
            the++;
        }
        tok = man_strtok_func(NULL, " ");
    }
    printf("Total Number of Articles: %d.\n", (a+an+the));
    printf("Where,\n    'A' exists %d times,\n    'An' exists %d times,\n    'The' exists %d times.\n", a, an, the);
    return 0;
}

