#include<stdio.h>
/*sometimes it is not possible to track program or what piece of code doing
It is a block of code which perform specific task
it can be used any number of times
convert large program in small number of parts
also called procedure or subroutined 

two types - library and user defined
library functions are included in header file not written by user
user defined are define by user as per their convinience
*/

void display();         // function prototype- tells about its existance , void indicates that it returns nothing 
void goodmorning();
void goodafternoon();
void goodnight();

int main()
{   
    printf("1\n");
    display();         // here u want function code
    printf("2\n");
    goodmorning();
    goodafternoon();
    goodnight();

    return 0;
}

void display(){    // function declaration - actual implimentation
    printf("HELLO ABHINAV\n"); 
}
void goodmorning(){
    printf("hello, good morning\n");
}
void goodafternoon(){
    printf("hello, good afternoon\n");
}
void goodnight(){
    printf("hello, good night\n");
}
