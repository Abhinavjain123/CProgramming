/*type declation --> int float char
arithmatic instruction---> + - * /
control instruction--> for loop while loop flow of program
typecasting  (type) value;
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a = 5, b, c;
    b = c = a;
    printf("The value of a is %d \n", a);
    printf("The value of b is %d \n", b);
    printf("The value of c is %d \n", c);

    int a1 = 10;
    int a2 = 8;
    printf("The value of a+b is %d \n", a + b);
    printf("The value of a-b is %d \n", a - b);
    printf("The value of a*b is %d \n", a * b);
    printf("The remainder of a1/a2 is %d \n", a1 % a2);
    printf("The remainder of -a1/a2 is %d \n", -a1 % a2);
    printf("The remainder of a1/-a2 is %d \n", a1 % -a2);
    printf("4^5 is %d \n", pow(4, 5));
    // pow() return double so
    printf("4^5 is %f \n", pow(4, 5));
    /*   int z; z=a +b   --> valid
    int z; a-b =z   --> invalid 
    (5)(4) and 4.5 here 4 is not multiplied by 5
    no operatorto perform exponentiation 
    ^ is bit wise xor logical operator valid but not raise to power

    int operates with int is int
    int operates with float is float
    float operates with float is float

    int a= 5.6;  --> a=5
    float a= 5   --> a=5.0
    */
    printf("%d \n", 5 / 2);   // --> correct
    printf("%d \n", 5.0 / 2); // --> shows 0
    printf("%f \n", 3.5);
    printf("%f \n", 5 / 2);   //shows previous resut but if prev res is 0 then shows after wala result
    printf("%f \n", 5.0 / 2); // --> correct
    printf("%f", 3);          // --> shows previous result

    char ch =  (char)97;
    printf("\n%c",ch);
    return 0;
}