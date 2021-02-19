#include<stdio.h>
#include<string.h>

int main() {
    char a[100][100];
    int i, j = 1, b = 0, c = 0, d = 0, e = 0;
    unsigned int x;

    printf("Enter a Line of String:\n");
    gets(a[0]);

    x = strlen(a[0]);

    for (i = 0; i < x; ++i) {
        if (a[0][i] != ' ') {
            ++c;
            while(a[0][i] != ' ' && a[0][i] != '\0') {
                a[j][e++] = a[0][i++];
            }
        }
        ++j;
        e = 0;
    }

    for(i = 1; i <= c; ++i) {
        for(j = 1; j <= c; ++j) {
            if (strcmp(a[i], a[j]) == 0) {
                ++d;
            }
        }
        if (d > b) {
            x = i;
            b = d;
        }
        d = 0;
    }
    printf("In given string, '%s' is most frequent word and it occurs %d times.", a[x], b);
    return 0;
}

