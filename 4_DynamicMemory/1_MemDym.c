/*
 * =======================================================================
 *                              ENUMS
 * =======================================================================
 *
 * - General Explanation:
 *   
 * 
 * - Important Questions:
 *    > What's the difference between static and dynamic memory?
 *      As the name indicates, static memory are memory reservations we
 *      do with a finite, fixated or constant size. For example when we
 *      declare an array like arr[10] we are specifying the space it'll
 *      reserve on memory, because it is specified then it will go to
 *      the stack. Meanwhile, with dynamic memory, depending on the si-
 *      tuations, we'll need to modify the size of the array, and there's
 *      where dynamic memory shines, a case of use is with organizing al-
 *      gorithms because you don't know how many data you'll need to or-
 *      ganize.
 *      
 * 
 * - To compile remember:
 *    >> gcc <-I> <relative path> <.c> -o <.exe name> <-lm>
 *    >> -lm: link math flag
*/

#include <stdio.h>
#include <stdlib.h>     // for malloc and calloc
#include <string.h>     // for memset


int main(int argc, char *argv[]) {
    // Static memory variables
    // All of them are static variables and they go to the stack. The stack
    // is not the data structure but a memory space grant by OS to our pro-
    // gram. So, in the stack:
    //      - All the things are placed continiously.
    //      - Is faster to access in memory because of the previous charac-
    //        theristhic.
    //      - Automatic memory management, that means the memory cleaning
    //        is made automatically. In other words, when our program exe-
    //        cutes the return 0, meaning the program has ended, all the
    //        variables created are cleaned from memory, the space they used
    //        to use is now liberated.
    int a = 10;
    int array[10];
    float val = 0.4;


    // On the other hand, the alternative of the stack use is the heap use,
    // and in this case:
    //       - It is not continious, it takes memory pieces from all over the
    //         the place. It just reserves space withput guarentee that those
    //         pieces are next to each other.
    //       - Doen't have automatic memory cleaning. That means the liberation
    //         of the must be executed manually. When we create variables we
    //         must erase them or fee them form memory, otherwise we'll have
    //         memory leaks. That last concept means that when the program fi-
    //         nishes in memory, for the OS those spaces are still reserved be-
    //         cause no one told them to disappear.
    //       - It's slower because of the previous reasons.
    //       - The heap is used in dynamic memory.
    // There are two ways to store dynamic memory: malloc() and calloc()
    // > malloc() means memory allocation
    // > calloc() means contiguous allocation it initializes in zero the data
    //   we want to reserve but malloc doesn't
    // They both have the same intentions of usage but in different ways.

    // First we initialize a void pointer, that means its a pointer that doesn't
    // have a type, it just contains a memory direction
    /* Things like this cannot be done:
     *  1. int a = *point;
     *     ... because void doesn't have a fixed size, therefore C doesn't what
     *         to do. Thankfully we can do casting to solve this kind of problem.
    */

    // So why is this all important, because calloc and malloc retunr a void
    // pointer, and then we must cast it into our wanted data type.
    int size = 10;
    void* point1 = NULL;
    void* point2 = NULL;

    // Calloc receives two parameters:
    //  1. A count of how much data we'd like to store but we also have to
    //  2. The size of that amount, for that we use the function 
    //                      sizeof(<data type>)
    point1 = calloc(size, sizeof(int));       // 10 integers = 40 bytes

    // Malloc receives one parameter:
    //  1. The final amout which is how much data multiplied by the size of it.
    point2 = malloc(size * sizeof(int));

    // Which one to use it depends, sometimes it's nice to initialize everything
    // in zero but when time is crucial, initializing values to zero takes time,
    // so if you really don't care the value stored in that memory then using ma-
    // lloc its the best fit, because you save up some time.

    // Now if you want to use those pointers, we need to transform them into the
    // corret data type
    int * pointA = (int *)point1;
    int * pointB = (int *)point2;

    // To fill up information we can use this
    pointA[2] = 5;
    pointB[9] = -1;

    for (int i=0; i<size; i++) {
        printf("Position %d of pointA is %d\n", i, pointA[i]);
        printf("Position %d of pointB is %d\n", i, *(pointB + i));
        printf("\n");
    }

    // or we can use the function memset() which accepts bytes only
    memset(pointA, 0xFF, size*sizeof(int));
    memset(pointB, 0x00, size*sizeof(int));

    for (int i=0; i<size; i++) {
        printf("Position %d of pointA is 0x%x\n", i, pointA[i]);
        printf("Position %d of pointB is 0x%x\n", i, *(pointB + i));
        printf("\n");
    }


    // -------------------------------------------------------------
    //                     NOW FOR RESIZING...
    // -------------------------------------------------------------
    // This is one of the most important features of dynamic memory
    // For thta we use realloc() which receives a void type pointer
    // We must be careful, when we downsize because we'll always lose
    // data
    pointA = (int *) realloc((void *)pointA, size*2*sizeof(int));
    pointB = (int *) realloc((void *)pointB, size*0.5*sizeof(int));


    // -------------------------------------------------------------
    //                     NOW TO FREE MEMORY...
    // -------------------------------------------------------------
    free(pointA);
    free(pointB);

    return 0;
}