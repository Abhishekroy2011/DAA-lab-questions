#include <stdio.h>

void merge(int a[], int lb, int q, int ub) {
    int n1 = q - lb + 1;
    int n2 = ub - q;
    int l[n1 + 1], r[n2 + 1]; // Temporary arrays (+1 for sentinel values)

    // Copy elements to left sub-array
    for (int i = 0; i < n1; i++)
        l[i] = a[lb + i];

    // Copy elements to right sub-array
    for (int j = 0; j < n2; j++)
        r[j] = a[q + 1 + j];

    // Sentinel values to avoid extra condition checks
    l[n1] = 99999;
    r[n2] = 99999;

    int i = 0, j = 0;

    // Merging process
    for (int k = lb; k <= ub; k++) {
        if (l[i] <= r[j]) {
            a[k] = l[i];
            i++;
        } else {
            a[k] = r[j];
            j++;
        }
    }
}

void mergesort(int a[], int p, int r) {
    if (p < r) {
        int q = p + (r - p) / 2;
        mergesort(a, p, q);
        mergesort(a, q + 1, r);
        merge(a, p, q, r);
    }
}

int main() {
    int n, i, a[10];

    // Input
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Display Unsorted Array
    printf("\nUnsorted Array: ");
    for (i = 0; i < n; i++)
        printf("[%d] ", a[i]);

    // Sorting
    mergesort(a, 0, n - 1);

    // Display Sorted Array
    printf("\nSorted Array: ");
    for (i = 0; i < n; i++)
        printf("[%d] ", a[i]);

    printf("\n");
    return 0;
}
