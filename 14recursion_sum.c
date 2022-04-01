#include<stdio.h> 
int sum(int num);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    printf("The sum of first %d numbers is %d",num,sum(num));
    return 0;
}
int sum(int num){
    if(num == 1){ // base condition
        return 1;
    }
    else{
        int result;
        result = sum(num-1) + num;
        return result;
    }
}