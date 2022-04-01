#include <stdio.h>

int sum(int a, int b);
int change(int t);

int main()
{
    int add;          // one function variable name is indipendent of another function variable name
    add = sum(7, 68); // here both variable name is same we can use same name
    // here 7, 68 are called actual parameters
    printf("%d \n", add);

    int c, a = 8;
    change(a);         //=6
    printf("%d\n", a); // a will not change; copy of a passed in function
    printf("%d\n", c = change(a));
    printf("%d\n", change(9));
    return 0;
}

int sum(int a, int b)
{            // a b are local variables which are assigned values from the arguments when the function is called in main and are called formal parameters
    int add; // this add is local variable can't be access in main()
    add = a + b;
    return add;
}

int change(int a)
{
    a = 6;
    return a;
}
// here a and b are parameter and 7 and 68 are arguments
