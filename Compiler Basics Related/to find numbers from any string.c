#include <stdio.h>
#define TRUE 1

int getWords(const char *base, char target[100][100])
{
    int n = 0, j = 0;

    for (int i = 0; TRUE; ++i) {
        if (base[i] == '\0') {
            break;
        } else if (base[i] != ' ') {
            target[n][j++] = base[i];
        } else {
            target[n][j] = '\0';
            n++;
            j = 0;
        }
    }

    return n;
}

int main()
{
    char str[100], arr[100][100];

    printf("Enter a Line of String: \n");
    gets(str);

    int n = getWords(str,arr);

    printf("Digits found in given String: \n");

    for (int i = 0; i <= n; ++i) {
        if (arr[i][0] >= 47 && arr[i][0] <= 57) {
            printf("%s\n", arr[i]);
        }
    }

    return 0;
}

