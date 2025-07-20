#include <assert.h>

int main() {
    int x;

    // Declare x as symbolic using __CPROVER_input (CBMC native)
    __CPROVER_input("x", x);

     
    int arr[100];
    printf("%d", arr[x]); // Accessing arr[x] where x is symbolic

    return 0;
}
