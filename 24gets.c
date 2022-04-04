#include<stdio.h> 

int main()
{
    char st[30];
    printf("Enter your name: \n");
    gets(st);
    
    puts(st); // put curcer in next line
    printf("%s\n",st);

    char *ptr = "abhinav"; // no need of bracket[]
    printf("%s\n",ptr);
    printf("%u\n",ptr);

    ptr ="jain";             //modification can be done if array pointer is defined
    printf("%s",ptr);

    // char ptr1[] = "jain";
    // ptr1 = "ghjk";          modification cannot be done if array [] is defined 
    // printf("%s",ptr1);      cannot be initialised to some thig else



    return 0;
}