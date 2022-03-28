/* 
for saving each file command- gcc -Wall -save-temps 0step_compilor.c -o 0step_compilor
compilor takes the following steps-

1. preproccessing--
remove commands, expand macros, include #include files and save in new file with extention .i
.i contains preprocessed file

2.compilation
.i convert to assembly level instructions and file is saved with .s extention
.s contains assembly level language file

3.assembly
assembly level file (.s) is converted to binary machine language file (.o)
.o contains machine language which can be understood by cpu

4.linking
it combine all .o file to make one file with .exe extention
different functions are saved in different .o file it make easier for us to run all at in one file
5. loading in main memory

; for terminating a statement
tokens are the basic building blocks of a c program like-
keyword, identifier, constant, string literal and symbol
*/
#include<stdio.h>
#define x "HELLO %d",4         // 4 is constant also (const) and "hello" is string literal
int main(
)
{
    printf                     // identifier
    (                          // symbol
       x
    )
    ;
         



    return                     // keyword


    
    0
    ; 
    // we can add as much spaces but atleast 1 space is necessary for identification of tokens
}
