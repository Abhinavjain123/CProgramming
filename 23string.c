/*
string data type is not present in c
string is a 1D character array terminated by a null character('\0')- ascii value 0
null character is used to denote string terminator character
are stored in continuous memory location

initialising string--
string is an array of characters ,it can be initialised as follows:

char s[]={'a','b','h','i','n','a','v','\0'} or 
"abhinav" in this c automatically add null character

scanf cannot be used to input multi word string with spaces

print -=> 
character-by-character in loop until '\0'
printf("%s",address/name);
puts(name);

input -=>
getchar() in loop until '\n' then valid string
gets(name);
scanf("%s") for one word
scanf("%[^\n]",name);    line
scanf("%[ abcdefghijklmnopqrstuvwxyz]",name);    line

*/

#include<stdio.h> 


int main()
{
    char name[]="abhinav";  // char store in 1 byte
    char *ptr=name;

    printf("size of name string is %d\n",sizeof(name));
    printf("its address is %u\n",name);
    printf("the address of next character is %u\n",name+1);
    printf("the address of last character is %u\n",name+6);
    printf("the address of null character is %u\n",name+7);
    printf("the value of first character is %c\n",*name);
    printf("the value of last character is %c\n",*(name+6));
    printf("the value of null character is %c\n",*(name+7));

    for(int i=0;i<sizeof(name);i++){
        printf("%c",name[i]);
    }
    for(int i=0;i<sizeof(name);i++){
        printf("%c",*(name+i));
    }
    printf("%s\n",name);// convinient way
    printf("%s\n",ptr);// convinient way
    printf("%u\n",ptr);

    while(*ptr != '\0'){
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");

    // input string
    char nm[30];
    printf("Enter your name\n");
    scanf("%s",&nm[0]);// scanf("%s",nm);  and it also add '\0' automatically  not for multi word
    printf("HELLO! your name is %s\n",nm);

    /* to store multi word string we use gets() and puts()
    get is the function used to receive a multi word string
    char st[30];
    gets(st);

    multiple gets() calls will be needed for multiple string 

    like wise puts() is used to output a string

    */
    
    return 0;
}




