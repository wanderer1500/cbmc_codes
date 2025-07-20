#include <stdio.h>

int main() {
    int arr[5];
    arr[5] =10; // This is an out-of-bounds write, CBMC should catch it
}
