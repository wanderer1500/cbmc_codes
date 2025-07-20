#include <assert.h>

int main() {
    int x = 0;
    for (int i = 0; i < 10; i++) {
        x += 2;
    }
    assert(x == 2);
    return 0;
}
