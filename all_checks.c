#include <assert.h>

int main() {
    int arr[3] = {1, 2, 3};
    int *p = &arr[1];

    for (int i = 0; i < 3; i++) {
        arr[i] += 1;
    }

    assert(arr[0] == 2);
    assert(*p == 3);
    // assert(arr[5] == 0); // Uncomment for bounds error

    return 0;
}
