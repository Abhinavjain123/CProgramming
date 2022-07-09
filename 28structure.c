/*
array have similar data
structure can hold dissimilar data 
SYNTAX- of C structure
struct employee{             this declares a new user defined data type!
    int code;                combine data of different types
    float salary;
    char name[10];
};

so a structure in c is a collection of variables of different types under a single name
different data types clubed in to one user defined data type
physically group list of variable under one name in a block of memory

structure packs in one name instead of creating different array
structure keeps the data organised
data management easy for programmer
*/
#include<stdio.h> 
#include<string.h> 

struct employee{
    int code;
    float salary;
    char name[20];
}empe;               // this is also global

struct df{
    int f;
    int d;
    char c; // size should be 9 but it is 12 because compilor is ease with 4 byte
    //  so allocate 4 byte for char but use 1 byte only this is called padding 
};


struct employee aj={3};  // this is now global variable and can be accessed in any function
// others set to 0

int main()
{
    //employee ei;  this data type is not present but we can make new data type employee

    struct employee e1;   // creating structure variable
    printf("%d\n",&e1);
    printf("%d\n",&e1 + 1);
    // printf("%f\n",e1);
    // printf("%s\n",e1);
    e1.code = 100;
    e1.salary = 50534.777;
    //e1.name = "ratan";  won't work  e1.name is pointer/address is assigned to array

    // char name1[20] = "ratan";
    // for(int i=0;i<6;i++){                 // do like this but lengthy
    //     *(e1.name+i) = *(name1+i);
    // }


    strcpy(e1.name,"ratan");                 // good method
    //    target , source

    printf("%d\n",e1.code);
    printf("%.3f\n",e1.salary);       // . is structure member operator
    printf("%s\n",e1.name);


    struct employee e2,e3={102, 34565.45, "ravi j"};   // initialised
    e2.code =101;
    e2.salary = 34560.56;
    strcpy(e2.name,"harry");

    printf("code of e2 %d\n",e2.code);
    printf("salary of e2 %.3f\n",e2.salary);       // . is member operator
    printf("name of e2 %s\n",e2.name);

    printf("code of e3 %d\n",e3.code);
    printf("salary of e3 %.3f\n",e3.salary);       // . is member operator structure_var.member_name
    printf("name of e3 %s\n",e3.name);

    printf("code of aj %d\n",aj.code);
    printf("salary of aj %.3f\n",aj.salary);       
    printf("name of aj %s\n",aj.name);
    return 0;
}