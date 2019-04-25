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

 6) Like normal data pointers, a function pointer can be passed as an argument and can also be returned from a function.
For example, consider the following C program where wrapper() receives a void fun() as parameter and calls the passed function.

 In C, we can use function pointers to avoid code redundancy. For example a simple qsort() function 
 can be used to sort arrays in ascending order or descending or by any other order in case of array of structures. 
 Not only this, with function pointers and void pointers, it is possible to use qsort for any data type.

qsort in STL:

void qsort (void* base, size_t num, size_t size,
            int (*compar)(const void*,const void*));
*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b){
    return (*(int*)a - *(int*)b);
}

int compare_float(const void * a, const void * b){
    return (*(float*)a - *(float*)b);
}

int main(){
    int arr[] = {10, 5, 15, 12, 90, 80};
    int n = sizeof(arr) / sizeof(arr[0]), i;

    qsort(arr, n, sizeof(int), compare);

    for(i = 0; i < n; i++) { printf("%d ", arr[i]); }
    printf("\n");

    float arrf[] = {10.2, 5.9, 15.0, 12.1, 90.0, 80.5};
    n = sizeof(arrf) / sizeof(arrf[0]);

    qsort(arrf, n, sizeof(float), compare_float);

    for(i = 0; i < n; i++) { printf("%f ", arrf[i]); }
    printf("\n");

    return 0;
}