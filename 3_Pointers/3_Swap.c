/*
 * =======================================================================
 *                              SWAP
 * =======================================================================
 *
 * - General Explanation:
 *   The variables are brn when theyre declared but they die when their
 *   scope finishes
 * 
 * - Important Questions:
 * 
 * 
 * - Challenge:
 *   Using binary logic swap the values without using a temporal buffer
 *      
 * 
 * - To compile remember:
 *    >> gcc <include directory> <relative path> <.c> -o <.exe name>
*/

#include <stdio.h>

// This one fails because the values are changed by value
// a and b in this function lives under the scope of swapF
// not in the main() scope
// a = copy of x
// b = copy of y
void swapF(int a, int b) {
    printf("[SwapF] Direction of a: %p\n", &a);
    printf("[SwapF] Direction of b: %p\n", &b);

    int temp = a;
    a = b;
    b = temp;
}

// This one is the right way. At the end their directions
// are the same, but the content was changed by accesing
// thier directions and inserting each other's values
// Parameters: x and y memory directions (pointers)
// temp: will store the value stored un the memory direction of c(x)
// *c = the value stored in the pointer of c is now the value stored
//      in the pointer of d
// *d = the value stored in the pointer of d is now the value of temp
//      which is the value that was stored in c
// In summary, we don't modify a and b, we modify the values pointed
// by those memory directions (pointers)
void swap(int *c, int *d) {
    printf("[Swap] Direction of c: %p\n", c);
    printf("[Swap] Direction of d: %p\n", d);

    int temp = *c;  // Temp is now the VALUE of c = x = 5
    *c = *d;        // Value of c = c is now the value of d = y = 10
    *d = temp;      // Value of d = y is now temp = 5
}

int main(int argc, char *argv[]) {
    // Declaring two variables
    int x = 5;
    int y = 10;

    // Print the values before sawpping
    printf("Before calling swap:\n");
    printf("x = %d, y = %d\n", x, y);
    printf("Direction of x: %p\n", &x);
    printf("Direction of y: %p\n", &y);

    // Print the values after wrongly swapping
    printf("---------------------\n");
    printf("After calling swapF():\n");
    swapF(x, y);
    printf("x = %d, y = %d\n", x, y);
    printf("Direction of x: %p\n", &x);
    printf("Direction of y: %p\n", &y);

    // Print the values after truly swapping
    printf("---------------------\n");
    printf("After calling swap():\n");
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    printf("Direction of x: %p\n", &x);
    printf("Direction of y: %p\n", &y);


    return 0;
}