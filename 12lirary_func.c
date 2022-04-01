#include<stdio.h> 
 
float* sgs_clib_ld_float_array(int size,float* ptr){
    float arr[size];
    ptr = arr;
    return ptr;
}

int main()
{
    float * aj;
    aj = sgs_clib_ld_float_array(5,aj);
    printf("%u",aj);
    return 0;
}