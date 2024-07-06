#include <stdio.h>

int main() {
    int n, m;
    int matrix[100][100];
    int num = 0;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                matrix[j][i] = num;
                num++;
            }
        } else {
            for (int j = n - 1; j >= 0; j--) {
                matrix[j][i] = num;
                num++;
            }
        }
    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}