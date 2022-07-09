/*
we can pass the address of structure to function
like any other data type
void show(struct employee e1);

*/
#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

void show(struct employee *a);
void show1(struct employee a);



int main()
{
    struct employee e1={420,3746.443,"harry"};
    show(&e1);

    struct employee e2;
    struct employee *e21=&e2;
    e21->code = 100;
    e21->salary = 343.5;
    strcpy(e21->name,"fgty");
    show(&e2);
    show1(e2);


    return 0;
}


void show(struct employee *a){
    printf("The code of employee is %d\n", a->code);
    printf("The salary of employee is %.3f\n",(*a).salary); // a->salary
    printf("The name of employee is %s\n",a->name);
}
void show1(struct employee a){    // here a is nor address it is like int a
    printf("The code of employee is %d\n",a.code);
    printf("The salary of employee is %.3f\n",a.salary); // a->salary
    printf("The name of employee is %s\n",a.name);
}
