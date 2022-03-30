/*we use if else to meet conditions 
--> if if-else if-else-if ladder   nested if
--> switch case
*/
#include <stdio.h>

int main()
{
    int a, b,vippass=0;
    printf("Enter a number\n");
    scanf("%d", &a);

    if (a % 2 == 0){
        printf("%d is even\n",a);
    }
    else{                                       // else is optional
        printf("%d is odd\n",a);
    }


    // relational operator
    int age;
    printf("Enter your age ");
    scanf("%d",&age);

    if((age>90 || age<18) && vippass ==0){
        printf("you cannot drive \n");
    }
    else if (age == 18){
        printf("U are eligible to get driving lisence after that u can drive\n");
    }
    else{
        printf("U can drive\n");
    }
    if(age=6){
        printf("this will execute since 6 a non zero number considered as True\n");
    }

    char ch;
    printf("Enter the subject(s) that u have passed (s for science/m for maths/b for both): ");
    scanf("\n");
    scanf("%c",&ch);
    if(ch == 's') printf("u got 15 Rs.");
    if(ch == 'm') printf("u got 15 Rs.");
    if(ch == 'b') printf("u got 45 Rs.");
    return 0;

    //conditional operators
    //condition?  condition if true; condition is false
}