#include <stdio.h>

struct Result {
    int min;
    int max;
};

struct Result findMinMax(int arr[], int low, int high) {
    struct Result res, left, right;

    // Only one element
    if (low == high) {
        res.min = res.max = arr[low];
        return res;
    }

    // Two elements
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            res.min = arr[low];
            res.max = arr[high];
        } else {
            res.min = arr[high];
            res.max = arr[low];
        }
        return res;
    }

    // More than two elements
    int mid = (low + high) / 2;
    left = findMinMax(arr, low, mid);
    right = findMinMax(arr, mid + 1, high);

    res.min = (left.min < right.min) ? left.min : right.min;
    res.max = (left.max > right.max) ? left.max : right.max;

    return res;
}

int main() {
    int arr[] = {7, 3, 5, 1, 9, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    struct Result result = findMinMax(arr, 0, n - 1);

    printf("Minimum: %d\n", result.min);
    printf("Maximum: %d\n", result.max);

    return 0;
}
