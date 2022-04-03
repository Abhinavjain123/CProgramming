#include<stdio.h> 

int main()
{
    // int arr[5];
    // for(int i=0;i<5;i++){
    //     printf("Enter the %d number: ",i+1);
    //     scanf("%d",&arr[i]);
    // }

    // for(int i=0;i<5;i++){
    //     printf("the %d  numbers is: %d\n",i+1,arr[i]);
    // }

    int arr1[4]={9,7,5,3}; // type of arr1 is integer array but arr1 itself is address of first element
    int *ptr=&arr1[0]; // or ptr = arr1;
    // arr1 is constant pointer we can not do arr1++ / arr1--/ arr1+= / arr1-=
    // we can not reassign arr1 but we can do ptr+= ptr++ ptr-- 
    printf("The address of arr1[0] is %u \n",&arr1[0]);
    printf("The address of arr1[1] is %u \n",&arr1[1]);// or &arr[0] + 1
    printf("The address of arr1[2] is %u \n",&arr1[2]);
    printf("The address of arr1[3] is %u \n",&arr1[3]);
    arr1[0]=90;
    printf("now arr1[0] is %d\n",arr1[0]);

    //access elements with use pointers
    printf("the %dst element is %d\n",1,*ptr);
    printf("the %dnd element is %d\n",2,*(ptr + 1));       // arr1[i] == *(ptr+i)
    printf("the %drd element is %d\n",3,*(ptr + 2));
    printf("the %dth element is %d\n",4,*(ptr + 3));

    // input with pointers
    int marks[5];
    //int *ptr2 = &marks[0]; can also be written in this way 
    int *ptr2 = marks;       // or this way
    printf("%u\n",ptr2);     

    for(int i=0;i<5;i++){
        printf("Enter the %d number: ",i+1);
        scanf("%d",ptr2 + i);
    }
    // OR
    // for(int i=0;i<5;i++){
    //     printf("Enter the %d number: \n",i+1);
    //     scanf("%d",ptr2);
    //     ptr2 ++;             //due to this ptr2 has increased many times,now difficult to print values with pointer
    // }
    // printf("%d\n",ptr2);
    // printf("%d\n",ptr2 +1);
    // printf("%d\n",marks[1]);

    // // so we have to print like this
    // for(int i=0;i<5;i++){
    //    printf("the %d mark is %d\n",i+1,marks[i]);
    // }


    for(int i=0;i<5;i++){
        printf("THe %d mark is %d \n",i+1, *(ptr2 + i));
    }
    printf("%u\n",ptr2);

    // ptr points to index 0
    // ptr++ will point to index 1




    return 0;
}