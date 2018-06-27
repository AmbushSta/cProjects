/*
    Self reminder code
*/

#include <stdio.h>
#include <stdlib.h>


/*
    In function f, the pointer had been allocated memory but had not been free'd.
    Now, 4 bytes have been permanetely used. Each time f is called, 4 bytes will
    be permanetely used each time. This is called, a memory leak.
*/

void f(){
    int* ptr = malloc(sizeof(int));
    /* Continued code */
}


/*
    Example of a dangling pointer, the pointer had been free'd but is still
    being used. Freeing a pointer allows it to be overwritten, at any pointer
    it is possible for the value to be changed.
*/

int main()
{
    int* ptr = malloc(sizeof(int));
    free(ptr);
    *ptr = 10; //Valid operation
    printf("%d", *ptr);
    
    f();
    return 0;
}
