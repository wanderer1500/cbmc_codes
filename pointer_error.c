#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = NULL;

    // Possible pointer dereferencing error
    *ptr = 10; // This is unsafe and CBMC should catch it

    printf("Value: %d\n", *ptr);
    return 0;
}
