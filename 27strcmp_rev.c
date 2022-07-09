/*
this function is used to compare two strings
return 0 if strings are equal

negetive value-- if first string's mismatching character's ASCII value is not greater than
second string's corresponding mismatching character 

return positive value otherwise

*/
#include<stdio.h> 
#include<string.h> 

int main()
{   
    char a[]="ras";
    char b[]="rs";
    printf("%d", strcmp(a,b));

    strrev(a);
    printf("\n%s\n",a);
    printf(strrev(b));
    return 0;
}