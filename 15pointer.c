/*
 a pointer is a variable which stores the address of another variable

 "address of" & operator-- used to optain the address of a given variable
 format specifier for pointer address is %u

 * is value at address operator/ indirection operator
 *&i gives value at address of i i.e. value of i

 HOW TO DECLARE A POINTER-->
 just like we have int char float double data type
 so the type of data used to store the value of address of another variable is
 data type of that pointer variable is

 int *j; declare a variable j of type int-pointer which store address of a integer variable
 j = &i  store the address of i
 here j points to i (*j=i)

 integer ke address ko store karne vala data type is int *
 int *variale --> pointer to integer
 char *variable --> pointer to character
 float *variable --> pointer to float

we can change the value of variable by address

pointer to a pointer-->
a variable which stores the address of a pointer
its data type is (int **variable) then int *** and continue...

NULL pointer-
pointer that is not assigned any value but NULL i.e nothing
it does not point to any object/function
use it to initialise a pointer / otherwise garbage value
syntax-
int *ptr = NULL;
used in linked list/ stack / ques / binary tree / binery search trees
also in dynamic memory allocatin / also re-allocate
using this a function can return many values
reduce code and increase efficiency

|   | 2 |   | 4 |   |
node     node    node
we can make link list in this memory
*/

#include <stdio.h>

int main()
{
    int i = 8;
    int *j = &i;
    int **k = &j;

    printf("The value of i is %d \n", i);
    printf("The value of i is %d \n", *&i);
    printf("The value of i is %d \n", *j);
    printf("The value of i is %d \n", **k);

    printf("The address of i is %u \n", &i);
    printf("The address of i is %u \n", j);
    printf("The address of i is %u \n", *k);

    printf("The value at address of i is %u \n", *&i);
    printf("The value at address of i is %u \n", *j);

    printf("The value of j is %d \n", j);
    printf("The value of j is %d \n", &i);
    printf("The value of j is %d \n", *k);

    printf("The address of j is %u \n", &j);
    printf("The address of j is %u \n", k);
    // printf("The value of address of j is %u \n",&&i);

    printf("The value at address of j is %u \n", *&j);
    printf("The value at address j is, that is the value of *j (i) is %u \n", *j);

    printf("the value of k is %u \n", k);
    printf("the address of k is %u \n", &k);
    printf("the value of j is %u \n", *k);
    printf("the address of j is %u \n", k);
    printf("the value of i is %u \n", **k);
    printf("the address of i is %u \n", *k);

    int *ptr2;
    int *ptr3=NULL;
    printf("ptr2 = %d\n", ptr2);
    printf("ptr3 = %d", ptr3);        // no garbage value
    
    

    return 0;
}