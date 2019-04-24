/*
Function pointers

Source:
https://www.geeksforgeeks.org/function-pointer-in-c/

 1) Unlike normal pointers, a function pointer points to code, not data. 
 Typically a function pointer stores the start of executable code.

 2) Unlike normal pointers, we do not allocate de-allocate 
 memory using function pointers.
 
 3) A function’s name can also be used to get functions’ address. 
 For example, in the below program, we have removed address operator ‘&’ in assignment. 
 We have also changed function call by removing *, the program still works.

 4) Like normal pointers, we can have an array of function pointers. 
 Below example in point 5 shows syntax for array of pointers.

 5) Function pointer can be used in place of switch case. 
 For example, in below program, user is asked for a choice between 0 and 2 to do different tasks
*/

#include <stdio.h>

void add(int a, int b){
    printf("Addition is %d\n", a+b);
}

void subtract(int a, int b){
    printf("Subtraction is %d\n", a-b);
}

void multiply(int a, int b){
    printf("Subtraction is %d\n", a*b);
}

int main(){
    //fun_ptr is a pointer to an array of functions
    void (*fun_ptr[])(int, int) = {add, subtract, multiply};
    unsigned int ch, a = 15, b = 10;

    printf("Enter Choice: 0 for add, 1 for subtract, 2 "
            "for multiply: \n"); 
    scanf("%d", &ch);

    (*fun_ptr[ch])(a, b);

    return 0;
}