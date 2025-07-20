#include <assert.h>

// Declare non-deterministic input functions (CBMC provides these)
extern int nondet_int();
extern _Bool nondet_bool();

int main() {
    int x = nondet_int();
    _Bool flag = nondet_bool();

    if (flag) {
        x = x + 10;
    } else {
        x = x - 10;
    }



    return 0;
}
