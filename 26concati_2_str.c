#include<stdio.h> 
#include<string.h> 


void strcat1(char *a,int a1,char *b,int b1);

int main()
{   
    
    char a[]="abhinav";
    char b[]="jain";
    printf("address of a is %u\n",a);
    printf("address of b is %u\n",b);
    strcat1(&a[0],sizeof(a),&b[0],sizeof(b));
    
    printf("concatinated using format is %s\n",a);

    // for(int i=0;i<13;i++){
    //     printf("%c",*(a+i));        // not working
    // }
    // int i=0;
    printf("%d\n",(a+8));
    printf("%c\n",*(a+8));

    // while(*(a+i) != '\0'){
    //     printf("%c",*(a+i));        //not working
    //     i++;
    // }
    //printf("%s\n",a);
    printf("%c",*(a+0));
    printf("%c",*(a+1));
    printf("%c",*(a+2));
    printf("%c",*(a+3));
    printf("%c",*(a+4));
    printf("%c",*(a+5));
    printf("%c",*(a+6));              //working
    printf("%c",*(a+7));
    printf("%c",*(a+8));
    printf("%c",*(a+9));
    printf("%c",*(a+10));
    printf("%c",*(a+11));
    // printf("%d\n",sizeof(a));

    char c[]="is good ";
    strcat1(a,sizeof(a),c,sizeof(c));
    printf("%s\n",a);

    printf("%d\n",sizeof(a));
    strcat(a,b);
    printf("%s\n",a);


    return 0;
}

void strcat1(char *a,int a1,char *b,int b1){
    // printf("%c\n",*(b+1));
    for(int i=0; i<b1; i++){
        *(a + a1 -1 +i)= *(b+i); // -1 to remove null character
        
    }
    printf("%u\n",a+8);
    printf("%c\n",*(a+8));
    
}
