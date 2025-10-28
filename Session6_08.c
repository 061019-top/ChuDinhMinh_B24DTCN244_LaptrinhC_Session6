#include <stdio.h>

int main() {
    int a, b, x, y, bcnn;
    scanf("%d%d", &a, &b);
    x = a;
    y = b;

    while (x != y) {
        if (x < y)
            x += a;
        else
            y += b;
    }

    bcnn = x;
    printf("BCNN = %d\n", bcnn);
    return 0;
}
