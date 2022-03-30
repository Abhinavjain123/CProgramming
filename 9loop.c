/*loops are used to repeat similar type of code snippet repeatedly
3 types--
while loop
do-while loop
for loop
loop keep execute as long as condition is true
if condition is always true it is called infinite loop
increament or decreament operator
a++ --> increament by one a=a+1
a-- --> decreament by one a=a-1
i++ --> first i then increment
++i --> first increment then i
--i and i-- also exist
+++ do not exist
+= is compound assignment operator like -=, *=, /= and %=
a += 10 increament a by 10

*/
#include<stdio.h> 

int main()
{   
    int a,i=0;
    printf("enter a number");
    scanf("%d",&a);

    while(a<10){
        printf("%d \n",a);
        a++; // a = a+1;
    }
    while(i<=20){
        if(i>=10){printf("The value of i is %d\n",i);}
        i++;
    }
    printf("the value of i after i++ is %d \n",i++); // when printed at same time do not increment;first print then increment
    printf("the value of i is %d\n",i);
    printf("the value of i after ++i is %d \n",++i); //increment at same time; first increment then print

    printf("Do-While loop\n");   // while loop check then execute
    i=0;                         // do-while loop execute then check and execute atleast once
    do{
        printf("THE VALUE OF I IS %d \n", i);
        i++;
    }while(i<=10);
    
    printf("for loop\n");
    /*for(initialise;test;increment){
        code
    }
    initialise: setting loop counter to initial value
    */

   for(int t=0; t<=10; t++){
       printf("the value is %d\n",t);
   }

   int num;
   printf("Enter a number");
   scanf("%d",&num);

   for(int v=num;v;v--){ // any non zero value is true when comes to 0 false
       printf("The value of v is %d\n",v);
   }
   
   // break and continue


    int n;
    for(int m=0,n=0; n=-1,n<-3, m<=1000; m++,n--){           
    // initiasiled more than one variable and it is not must only use when we want to initialise 
    // can use more than one condition but only last condition is the loop condition other condition is simply executed can also perform the task of 1 and 3 statement of loop and optional if break is used
    // we can update more than one variable and optional since we can increment in body

    
       if(m==4){continue;}
       printf("the value is %d %d\n",m,n);
       if(m==7){break;}
    }
    // do printf("4"); while(4>3);    valid
    return 0;
}
// break statement completely exits the loop and continue skips the perticular iteration


