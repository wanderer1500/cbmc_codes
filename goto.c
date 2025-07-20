#include <stdio.h>

int *ptr;

int main() {
    if (ptr)
        *ptr = 0;
    if (!ptr)
        *ptr = 1;
    return 0;
}
