#include<stdio.h>
#include<string.h>
struct Report{
    char Fullname[50];
    char Location[20];
    int ranking;
    int contact;

};
int main()
{
    struct Report u1,u2;
    strcpy(u1.Fullname,"Daffodill International University");
    strcpy(u1.Location,"Dhaka");
    u1.ranking=7;
    u1.contact=017433045573;
    strcpy(u2.Fullname,"Dhaka University");
    strcpy(u2.Location,"Dhaka");
    u2.ranking=2;
    u2.contact=01743123456;
    printf("\n\n");
    printf("%s\t\n",u1.Fullname);
    printf("%s\t\n",u1.Location);
    printf("%d\t\n",u1.ranking);
    printf("%d\t\n",u1.contact);
    printf("\n\n");
    printf("%s\t\n",u2.Fullname);
    printf("%s\t\n",u2.Location);
    printf("%d\t\n",u2.ranking);
    printf("%d\t\n",u2.contact);


    return 0;
}
