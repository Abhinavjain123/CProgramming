/*
if more no. of struct elements then
structure in memory-->
stored in continuous memory location
| code | salary | name |
 335410 335414   335418 

 in array of structure these employee instances are
 stored adjacent to each other

 pointer to structure-->
 int *ptr;
 struct employee *ptr;  store the address of employee
 ptr = &e1;

*/

#include<stdio.h> 
#include<string.h> 

struct employee{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee facebook[100];   // instead of single no. we make array of int access by a[]
    // similarly we make array of structure access by facebook[0-99]
    facebook[0].code = 100;
    facebook[0].salary = 13646.36;
    strcpy(facebook[0].name,"djfj");

    facebook[1].code = 101;
    facebook[1].salary = 1335646.36;
    strcpy(facebook[1].name,"deyrj");

    // other way to initialise

    struct employee aj = {1,827827.8,"abj"};
    struct employee zero = {0};

    printf("%d\n",aj.code);
    printf("%s\n",aj.name);

    printf("%d\n",zero.code);
    printf("%f\n",zero.salary);
    printf("%s\n",zero.name);  // null character

    struct employee *ptr;  //store the address of employee
    ptr = &aj;
    printf("the address of aj is %u\n",ptr);
    printf("the address of aj+1 is %u\n",ptr+1); // not like this is beyond whole aj

    printf("the value at address of aj is %d\n",*ptr); // aj = *ptr 
    printf("the value at address next of aj is %f\n",(*ptr).salary); // aj.salary
    
    (*ptr).salary = 3534;
    printf("Now salary is %f\n",aj.salary);                          // name.instance gives value
    printf("The address of salary in memory is %u\n",&(aj.salary));
    printf("The address of salary in memory is %u\n",&((*ptr).salary)); 
    printf("The value of salary in memory is %f\n",(&aj)->salary);
    printf("The value of salary in memory is %f\n",ptr->salary);
    printf("The address of salary in memory is %d\n", &(ptr->salary));

    // another way
    ptr->salary = 67367.2; // u can write this instead of (*ptr).salary = 3534;
    printf("Now salary is %f\n",aj.salary); // -> is called arrow operator 





    return 0;
}