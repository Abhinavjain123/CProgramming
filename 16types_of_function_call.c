/*
based on the way we pass arguments to the function, function calls are of two types-
call by value     -- sending the value of arguments 
call by referance -- sending the address of arguments

int c= sum(3,4)
defined as sum(int a,int b)


*/

int sum1(int a,int b){
    int c= a+b;
    printf("The value of functional argument a and b before is %d, %d\n",a,b);
    a = 54; 
    b = 32;
    printf("The value of functional argument a and b after is %d, %d\n",a,b); // value is change of copied variable
    printf("The address of functional argument a and b is %u, %u\n",&a,&b);
    return c;
}

int sum2(int *x,int *y){
    printf("The value of x and y is %u and %u\n",x,y);
    int rel= *x + *y;
    *x = 56;
    *y = 78;
    return rel;

}

#include<stdio.h> 

int main()
{   
    // call by value

    int a=3,b=4;
    printf("The value of a and b is %d, %d\n",a,b);
    printf("The address of a and b is %u, %u\n",&a,&b);
    printf("Sum is %d\n",sum1(a,b)); // call by value we cannot change the value of variable in main by function unless pointer is used
    printf("The value of a and b is %d, %d\n",a,b); // same value of a,b bcz a copy of a,b is passed to function 
    printf("/n");

    // call by referance -- here address of variable is passed to function

    printf("The value of a and b is %d, %d\n",a,b); // function ke variables ka koi relation nahi hota unless pointers
    printf("The address of a and b is %u, %u\n",&a,&b);
    printf("The sum of a and b by call by address is %d\n",sum2(&a,&b));
    printf("The value of a and b is %d, %d\n",a,b);

    return 0;
}