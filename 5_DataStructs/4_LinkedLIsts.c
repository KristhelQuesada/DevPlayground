/*
 * =======================================================================
 *                              SWAP
 * =======================================================================
 *
 * - General Explanation:
 *  
 * 
 * - Important Questions:
 *      
 * 
 * - To compile remember:
 *    >> gcc <include directory> <relative path> <.c> -o <.exe name>
*/

#include <stdio.h>

struct node {
    int value;
    struct node* next;
};

struct nodeTree{
    int value;
    struct nodeTree* rightNode;
    struct nodeTree* leftNode;
};

int main(int argc, char *argv[]) {
    struct node node1;
    node1.value = 10;
    node1.next = NULL;

    struct node node2;
    node2.value = 5;
    node2.next = NULL;

    struct node node3;
    node3.value = 15;
    node3.next = NULL;

    node1.next = &node2;
    node2.next = &node3;

    struct node iterador;
    iterador = node1;

    while (1) {
        printf("Node %d\n", iterador.value);
        if (iterador.next == NULL) {
            break;
        }
        iterador = *iterador.next;
    }

    struct node* iter;
    iter = &node1;

    while (1) {
        printf("Node %d\n", iter->value);
        if (iter->next == NULL) {
            break;
        }
        iter = iter->next;
    }

    return 0;
}