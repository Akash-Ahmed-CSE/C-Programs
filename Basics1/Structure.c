#include<stdio.h>
struct Person
{
    int age;
    float salary;
};

int main()
{

    struct Person   person1,person2;
    printf("Enter age:");
    scanf("%d",&person1.age);
    printf("Enter salary:");
    scanf("%f",&person1.salary);
    printf("age :%d\n",person1.age);
    printf("salary :%.2f\n",person1.salary);
    return 0;
}
