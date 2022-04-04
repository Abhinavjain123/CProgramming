#include<stdio.h> 
#include<string.h>

int strlen1(char *a);

int main()
{
    char st[] = "abhinav jain";
    
    printf("The length of the string is %d\n",strlen1(st));// length excluding null character
    printf("The length of the string is %d\n",strlen(st));// length excluding null character
    printf("The length of the string is %d\n",sizeof(st)-1); // - due to null, character length including null character

    // how to copy string
    char st1[sizeof(st)];
    for(int i=0;i<sizeof(st);i++){
        *(st1+i) = *(st +i);
    }
    printf("%s\n",st);
    printf("the value of st1 is %s\n",st1);

    // using function

    char st2[30];
    strcpy(st2,st1);// jisme copy, jisse copy
    printf("the value of st2 is %s",st2);
    
    return 0;
}


int strlen1(char *a){
    int count=0;
    while(*a != '\0'){
        count++;
        a++;
    }
    
    return count;
}
