/*recursion -->
a function in c can call itself this is called recursion
and function is called recursive function.
ex-
factorial(n)= 1 X 2 X 3 X 4.....X n
            = factorial(n-1) X n

since we can write factorial of  a number in terms of itself
we can program it using recursion 
any program which call itself(recursive) can also be solved iteratively 
*/
#include<stdio.h> 

int fact(int num);

int main()
{   
    int num=6;
    printf("The factorial of %d is %d",num,fact(num));
    return 0;
}


int fact(int num){
    int result;
    if(num==1 || num ==0){    // base case when function does not recur
        return 1;
    }
    else{
        result = fact(num-1) * num;    //function me vahi function
    }
    
    return result;
}