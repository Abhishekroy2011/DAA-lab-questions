#include <stdio.h>

// Function to compute Fibonacci number recursively
int fibonacci(int n) {
    if (n == 0)  // Base case 1
        return 0;
    else if (n == 1)  // Base case 2
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call
}

int main() {
    int n;

    // Taking user input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Compute and display Fibonacci number
    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));

    return 0;
}
