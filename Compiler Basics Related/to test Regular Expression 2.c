//For b(bb)*
#include<stdio.h>
#include<string.h>
int main()
{
    int count = 0, flag;
    char ch[100];

    printf("Regular Expression: b(bb)*\n");
    printf("Enter Text To Check:\n");
    gets(ch);

    unsigned int l = strlen(ch);

    for (int i = 0; i < l; i++){
        if(ch[i] == 'b') count++;
    }
    if(count % 2 == 1){
        flag = 1;
    } else {
        flag = 0;
    }
    if (flag == 1) {
        printf("Result: Accepted!");
    } else {
        printf("Result: Not Accepted!");
    }

    return 0;
}
