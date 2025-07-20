#include <assert.h>

int main() {
    // int x = 10;
    int x;
    __CPROVER_input("x", x);
    int arr[100];
    printf("%d",arr[x]);
    int *p = &x;
    
    // assert(*p == 10); //  Safe

    p = 0;
    // assert(*p == 0); //  Unsafe (null pointer dereference)

    return 0;
}
