
/*
 * Use the sizeof() operator to examine memory use 
 * of the pointer type
 */

#include <stdio.h>

int main( void ) {

    int *testIntPtr;
    double *testDblPtr;
    char *testChrPtr;

    printf("Int pointer size is %ld bytes\n",sizeof(testIntPtr));
    printf("Double pointer size is %ld bytes\n",sizeof(testDblPtr));
    printf("Char pointer size is %ld bytes\n",sizeof(testChrPtr));

    return 0;
}
