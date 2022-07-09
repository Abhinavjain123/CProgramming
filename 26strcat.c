#include<stdio.h> 
#include<string.h>


int main()
{
    char a[30]= "Abhinav ";
    char b[30]= "Jain";
    strcat(a,b); 

    printf("%s\n",a); // store concatnated string in a

    for(int i=0; i<13;i++){
        printf("%c",*(a+i));
    }

    int j=0;
    while(j<13){
        printf("%c",*(a+j));
        j++;
    }



    return 0;
}