/*
1 int = 4 byte varies according to system architechure
pointer can be increased or decreased (by 4)

1 char = 1 byte
a pointer can be incremented to point the next memory location of that type

*/

#include<stdio.h> 
 
int main()
{
    int i=3;
    int *ptr =&i;
    printf("The value of ptr is %u \n",ptr);
    ptr++;// ptr = ptr + 1
    printf("The value of ptr is %u \n",ptr);// increased by 4
    ptr++;
    printf("The value of ptr is %u \n",ptr);// again increased by 4
    ptr--;
    printf("The value of ptr is %u \n",ptr);// decreased by 4
    ptr = ptr +2; // 2 X no. of byte will be added
    printf("The value of ptr is %u \n",ptr);

    // ptr = ptr * 2;    will not work
    // printf("The value of ptr is %u \n",ptr);
    char ch;
    char *pt= &ch;
    printf("The address of ch is %u\n",pt);
    pt++; // increment of 1 
    printf("The value of pt is %u \n", pt);  // char store 1 byte

    float ft;
    float *pt1= &ft;
    printf("The address of float pointer is %u\n",pt1);
    pt1++; // increment of 4  
    printf("The value of ft after incre of 1 is %u \n", pt1);  // float store 4 byte

    // if i know the address of first element in array then ptr++ will give the next element

    printf("addition of 5 to float pointer is %u \n",pt1 +5); // 5 X 4 here value of pt1 will not change print only condition
    printf("substraction of 5 to float pointer is %u \n",pt1 -5); // 5 X 4

    float ft2;
    float *pt2=&ft2;
    printf("%u - %u\n",pt1,pt2);
    printf("subst. of a pointer from another is %u\n",pt1-pt2);// diff of 2 = 2 X 4
    
    // we can also compare two pointer
    if(pt1>pt2){
        printf("%s","yes");
    }
    



    

    return 0;
}