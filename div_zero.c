#include <assert.h>

int main() {
    int x = nondet_int();
    __CPROVER_assume(x >= 0 && x <= 10);
    
    int y = 100 / (x - 5);  //  Division by zero possible if x==5
    
    return 0;
}
