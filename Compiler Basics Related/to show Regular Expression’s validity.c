#include <stdio.h>
#define MATCH printf("Acceptable");
#define NOT_MATCH printf("Unacceptable");
char R_E[20], text[20];

int main() {
    int i, a, b, f = 0;
    char ans;
    do {
        printf("Enter the Regular Expression\n");
        scanf(" %[^\n]s", R_E);
        for (a = 0; R_E[a] != '\0';a++);
        printf("Enter the text\n");
        scanf(" %[^\n]s", text);
        for (b = 0;text[b] != '\0' ; b++);
        if (R_E[0] == '*')
        {
            printf("\nInvalid Regular expression");
        }
        if ((R_E[0] >= 65 && R_E[0] <= 90) || (R_E[0] >= 97 && R_E[0] <=122))
        {
            if (R_E[0] == text [0])
            {
                switch (R_E[1])
                {
                    case '.' :
                        switch (R_E[2])
                        {
                            case '*':
                                if (b != 1)
                                {
                                    if (R_E[3] == text[b-1])
                                    {
                                        MATCH
                                    }
                                    else
                                    {
                                        NOT_MATCH
                                    }
                                }
                                else
                                {
                                    NOT_MATCH
                                }
                                break;
                            case '+':
                                if (text[1] != R_E[3])
                                {
                                    if (R_E[3] == text[b - 1])
                                    {
                                        MATCH
                                    }
                                    else
                                    {
                                        NOT_MATCH
                                    }
                                }
                                break;
                            case '?':
                                if (text[1] == R_E[3] || text[2] == R_E[3])
                                {
                                    if (text[1] == R_E[3] || text[2] == R_E[3])
                                    {
                                        MATCH
                                    }
                                    else
                                    {
                                        NOT_MATCH
                                    }
                                }
                                else
                                {
                                    NOT_MATCH
                                }
                                break;
                        }
                        break;
                    case '*':
                        if (R_E[a-1] == text[b-1])
                        {
                            for (i = 0;i <= b-2;i++)
                            {
                                if(text[i] == R_E[0])
                                {
                                    f = 1;
                                }
                                else
                                {
                                    f = 0;
                                }
                            }
                            if ( f == 1)
                            {
                                MATCH
                            }
                            else
                            {
                                NOT_MATCH
                            }
                        }
                        else
                        {
                            NOT_MATCH
                        }
                        break;
                    case '+' :
                        if (b <= 2)
                        {
                            NOT_MATCH
                        }
                        else if (R_E[a-1] == text[b-1])
                        {
                            for (i = 0;i < b-2;i++)
                            {
                                if (text[i] == R_E[0])
                                {
                                    f = 1;
                                }
                                else
                                {
                                    f = 0;
                                }
                            }

                            if (f == 1)
                            {
                                MATCH
                            }
                            else
                            {
                                NOT_MATCH
                            }
                        }
                        break;
                    case '?':
                        if (R_E[a -1] == text[b-1])
                        {
                            MATCH
                        }
                        else
                        {
                            NOT_MATCH
                        }
                        break;
                }

            }
            else
                printf("Does not match");
        }
        else if (R_E[0] == '^')
        {
            if (R_E[1] == text[0])
            {
                MATCH
            }
            else
            {
                NOT_MATCH
            }
        }
        else if (R_E[a-1] == '$')
        {
            if (R_E[a-2] == text[a-1])
            {
                MATCH
            }
            else
            {
                NOT_MATCH
            }
        }

        else
            printf("Not Implemented");
        printf("\nGo Further?(Y/N)");
        scanf(" %c", &ans);
    } while (ans == 'Y' || ans == 'y');
}

