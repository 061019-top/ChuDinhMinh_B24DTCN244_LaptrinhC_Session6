#include <stdio.h>

int main() {
    int n, i;
    do {
        scanf("%d", &n);
        if (n < 1 || n > 10) {
            printf("Vui long nhap so tu 1 den 10\n");
        }
    } while (n < 1 || n > 10);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
