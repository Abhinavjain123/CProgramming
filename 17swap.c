/*
call by value-
it means we are passing the value of the arguments which are copied into the formal parameters of the function, original value remain unchanged and only the parameter changes

call by referance-
it also copies, but address of variables into the formal parameters of function
and address can be de-referanced using * and the actual value can be altered
*/

#include<stdio.h> 

void wrongswap(int a,int b);
void swap(int *a,int *b);

// all (different function) arguments have different address despite having same name unless pointers are used

int main() // calling function
{   
    int a=3, b=4;
    printf("The value of a and b is %d, %d\n",a,b);
    wrongswap(a,b); // call by value
    printf("The value of a and b after wrong swap is %d, %d\n",a,b);

    swap(&a,&b);   // call by referance
    printf("The value of a and b after swap is %d, %d\n",a,b);
    // since the address is passed to function , now it can modify the values

    return 0;
}


void wrongswap(int a,int b){ // called function
    int temp=a;
    a=b;
    b=temp;

}

void swap(int *a,int *b){
    int temp = *a; // a is address
    *a = *b;
    *b = temp;
}