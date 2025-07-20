#include <assert.h>

int square(int x) {
    return x * x;
}

int main() {
    int a;
    __CPROVER_assume(a >= -600000 && a <= 60000);  // optional: limit input range
    int res = square(a);
    assert(res >= 0);  // verification property
    return 0;
}
