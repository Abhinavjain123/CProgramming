/*
a array is collection of similar kind of elements or data i.e all int, float;
one variable => store multiple value
continuous memory locate
can also store derived data type poiner or structure
1D array is like list
2D array is like table or matrix
access by index

SYNTAX-
int marks[20];           -integer array
char name[14];           -character array
float percentile[15];    -float array

4 operators used for pointers
++ 
--
+
-

*/

#include<stdio.h> 

int main()
{
    int marks[5];
    marks[0] = 89; // index starts from 0
    marks[1] = 78;
    marks[2] = 90;
    marks[3] = 67;
    marks[4] = 86;

    // accessing elements
    printf("%d \n",marks[3]);

    float per[4]={78.8, 89.9, 97.4, 95.3};     // initialsed also
    printf("percentiles are %f,%f,%f,%f\n",per[0],per[1],per[2],per[3]);


    int num[4];

    for(int i=0; i<4;i++){
        printf("Enter the %d value: ",i+1);
        scanf("%d", &num[i]);
    }
    for(int i=0; i<4;i++){
        printf("num %d is %d \n",i+1,num[i]);
    }

    float j[]={2, 4, 6}; // since we use float so it
    printf("%f\n",j[0]); // gives float if int then 0
    printf("%f\n",j[1]);                                          
    printf("%f\n",j[2]);

    printf("%u\n",&j[0]); // 1 integer = 4 byte = 32 bit
    printf("%u\n",&j[1]);
    printf("%u\n",&j[2]);// can calculate next address

    
    
    return 0;
}