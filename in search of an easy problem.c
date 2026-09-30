#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int is_hard = 0; // Flag to track if anyone says HARD

    for (int i = 0; i < n; i++) {
        int opinion;
        scanf("%d", &opinion);

        if (opinion == 1) {
            is_hard = 1;
        }
    }

    // Output the result
    if (is_hard == 1) {
        printf("HARD\n");
    } else {
        printf("EASY\n");
    }

    return 0;
}
