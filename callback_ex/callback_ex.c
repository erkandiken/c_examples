/*

Callback example

Source: https://www.geeksforgeeks.org/callbacks-in-c/
A callback is any executable code that is passed as an argument to other code, 
which is expected to call back (execute) the argument at a given time 
*/

#include <stdio.h>

void A() {
    printf("I am function A\n");
}

// callback function
void B(void (*fun_ptr)()){
    (*fun_ptr)();
}

int main(){
    void (*ptr)() = &A;
    
    // calling function B and 
    // passing addres of the func A as an argument
    B(ptr);

    return 0;
}