#include <stdio.h>
#include <stdbool.h>

bool contains_369(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit == 3 || digit == 6 || digit == 9) {
            return true;
        }
        num /= 10;
    }
    return false;
}

int count_valid_numbers(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (i % 3 == 0 || contains_369(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int result = count_valid_numbers(a, b);
    printf("%d\n", result);

    return 0;
}