/*
Two ways =>
by declaring array as a parameter in a function  -=>     int avg(int arr[]){}
by declaring a pointer in function to hold the base address of the array -=> int avg(int *ptr)
always goes by referance
*/


#include<stdio.h> 

void printarr(int *a,int n);
void printarr1(int a[],int n);
// void printarr1(int a[][2],int n);  2D array is received and column [2] is important

int main()
{
    int arr1[]={11,22,33,44,55,66};
    printf("%d\n",sizeof(arr1)/4);
    printarr(arr1,sizeof(arr1)/4); //since size gives no. of bites and only array name is passd without [] in 2D array same way is passed in main but receive changes
    printf("%d\n",arr1[0]);
    printarr1(arr1,sizeof(arr1)/4);// arr1 is address
    printf("%d\n",arr1[0]);

    return 0;
}


void printarr(int *a,int n){  // in this we can change value of array since address is passed
    for(int i=0;i<n;i++){
        printf("the value of %d element is %d \n",i+1,*(a+i));
    }
    a[0] = 0;   // also --  *a = 0;
}

void printarr1(int a[],int n){ // in this we can change value of array since address is passed
    for(int i=0;i<n;i++){
        printf("The %d element is %d\n",i+1,a[i]);  // *(a+i)
    }
    a[0]=11;  // it is reflected in main()
}
