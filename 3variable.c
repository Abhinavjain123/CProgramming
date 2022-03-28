#include <stdio.h>
// this is a comment
/*
this is
a multi
line comment
variable is the name given to memory location
type var_name;
identifier can contain alphabet underscore and number but not starting
no space and reserved word in name

DATA types-
basic --> int, float,double, char
derived --> array, pointer, structure, union
Enumeration --> enum
Void data type --> void

to restrict the no. of points after decimal we use %.0f %.1f %.2f %.3f  
*/
int main()
{
    int num1 = 4;              // initialised also
    int _num1 = 74;
    float num2 = 56.93;
    char alph = 'A';
    char sp = '@';
    printf("%lu\n",sizeof(int)); 
    printf("The value of num1 is %d \n", num1);
    printf("The value of _num1 is %d \n", _num1);
    printf("The value of num2 is %f \n", num2);
    printf("The value of alph is %c \n", alph);
    printf("The value of alph is %d \n", alph);  // char in %d
    printf("The value of sp char is %c \n", sp);
    printf("The sum of nun1 and num2 is %f \n", num1 + num2);
    printf("The product of _nun1 and num2 is %f \n", num1 * num2);

    char ty[5];
    scanf("%s",ty);
    printf("hi %s",ty);

    // if(ty == "yes"){
    //     printf("jhfjd");
    // }

    int _=1,__=2;
    printf("%d",_+__);
    return 0;
}