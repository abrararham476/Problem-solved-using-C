#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        long long n, x, y, d;
        scanf("%lld %lld %lld %lld", &n, &x, &y, &d);

        long long min_steps = -1;

        // Path 1: Direct move from x to y
        long long diff = x - y;
        if (diff < 0) diff = -diff;

        if (diff % d == 0) {
            min_steps = diff / d;
        }

        // Path 2: Via Page 1
        if ((y - 1) % d == 0) {
            long long steps_to_1 = (x - 1 + d - 1) / d;
            long long steps_from_1 = (y - 1) / d;
            long long total = steps_to_1 + steps_from_1;

            if (min_steps == -1 || total < min_steps) {
                min_steps = total;
            }
        }

        // Path 3: Via Page n
        if ((n - y) % d == 0) {
            long long steps_to_n = (n - x + d - 1) / d;
            long long steps_from_n = (n - y) / d;
            long long total = steps_to_n + steps_from_n;

            if (min_steps == -1 || total < min_steps) {
                min_steps = total;
            }
        }

        printf("%lld\n", min_steps);
    }

    return 0;
}
