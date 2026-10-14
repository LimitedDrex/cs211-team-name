#include <stdio.h>

int countWays(int n) {
    if (n <= 2) return n;
    int prev2 = 1, prev1 = 2;
    for (int i = 3; i <= n; i++) {
        int cur = prev1 + prev2;
        prev2 = prev1;
        prev1 = cur;
    }
    return prev1;
}

int main(void) {
    printf("%d\n", countWays(1));   // 1
    printf("%d\n", countWays(3));   // 3
    printf("%d\n", countWays(4));   // 5
    printf("%d\n", countWays(40));  // 165580141
    return 0;
}
