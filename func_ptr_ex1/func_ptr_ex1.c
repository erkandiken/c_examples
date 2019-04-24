/*
Function pointers

Source:
https://www.geeksforgeeks.org/function-pointer-in-c/

 1) Unlike normal pointers, a function pointer points to code, not data. 
 Typically a function pointer stores the start of executable code.

 2) Unlike normal pointers, we do not allocate de-allocate 
 memory using function pointers.
*/

#include <stdio.h>

void fun(int a){
    printf("Value of a is %d\n", a);
}

int main(){
    //fun_ptr is a pointer to function fun
    void (*fun_ptr)(int) = &fun;
    
    // The above line is equivalent of following two lines
    /*
    void (*fun_ptr)(int);
    fun_ptr = &fun;
    */
   
    //Invoking fun() using fun_ptr
    (*fun_ptr)(10);    

    return 0;
}