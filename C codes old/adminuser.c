#include<stdio.h>

int main(){

    int input,pid;
    char pname[100];
    float price;
    printf("Press 1 for admin and 2 for user: ");
    scanf("%d",&input);

    if(input == 1){
        printf("press 1 to insert press 2 to delete\n");
        scanf("%d",&input);
        switch(input){
        case 1:
            printf("Enter product details: id,price,name");
            scanf("%d %f",&pid,&price);
            getchar();
            gets(pname);
            printf("insertproduct(product, %d, %s, %.2f);\n",pid,pname,price);
            break;
            case 2:
            printf("deleteproduct();\n");
            break;
        }
    }else{
        printf("Hi user");
    }


return 0;
}
