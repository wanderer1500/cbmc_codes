#include <assert.h>

int main() {
    int arr[5] = {0, 1, 2, 3, 4};
    assert(arr[2] == 2);
    // assert(arr[5] == 0); // Uncomment to test out-of-bounds
    return 0;
}
