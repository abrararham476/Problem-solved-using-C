#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Array of all lucky numbers up to 1000
    int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int total_lucky = 14;

    // Check if n is divisible by any lucky number
    for (int i = 0; i < total_lucky; i++) {
        if (n % lucky[i] == 0) {
            printf("YES\n");
            return 0; // Exit as soon as we find a valid divisor
        }
    }

    // If no lucky number divides n
    printf("NO\n");

    return 0;
}
