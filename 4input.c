/*
format specifier tell compiler what type of data is in a variable 
%a.bf --> b decimal places in a character spaces
%d    int
%c    char
%s    string
%u    unsigned int (address)
%o    convert to octal
%x    convert to hexadecimal
%l    long
%lf   double
%lF   long double
*/

/*
numeric constant-
macros #define preprocessor
const keyword
enum
ex of constants are 12, 5.6, 'a', "hfkjfef f wfu" address of first char is constant in string
*/


/* escape sequence character
\n- single character
\t- tab
\b- backspace
\a- sound/beep
\v- vertical tab
\\- backslash
\'- single quote
\"- double quote
\0 - null character
\nnn - octal number
\xhh - hexadecimal number
*/

#include <stdio.h>
#define MAX 23

int main()
{
    unsigned int a, b;
    printf("Enter the value of a: ");       // %d--> format specifier
    scanf("%u", &a);                     // where &--> is address of a
    float f = 4.56;                                      
    printf("Enter the value of b: ");
    scanf("%u", &b);
    printf("tHE SUM OF TWO NUMBERS IS %d", a + b);
    printf("\nEnter the value of float number:%0.3fdone",f);
    printf("\nEnter the value of float number:%4.3fdone",f);
    printf("\nEnter the value of float number:%5.3fdone",f);
    printf("\nEnter the value of float number:%6.3fdone",f);
    printf("\nEnter the value of float number:%7.3fdone",f);
    printf("\nEnter the value of float number:%8.3fdone",f); // first leave then print number
    printf("\nEnter the value of float number:%-4.3fdone",f);
    printf("\nEnter the value of float number:%-5.3fdone",f);
    printf("\nEnter the value of float number:%-6.3fdone",f);
    printf("\nEnter the value of float number:%-7.3fdone",f); // first print then leave extra spaces
    printf("\nEnter the value of float number:%-17.3fdone",f);

    const int con1= 10;
    printf("\nconst int = %d",con1);
    // con1 = 11;  error: assignment of read-only variable 'con1'
    // con1++;     error: increment of read-only variable 'con1'
    printf("\nmacros preprocessor %d",MAX);
    // MAX = 45;   error: lvalue required as left operand of assignment

    printf("\a");
}
