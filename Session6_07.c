#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    printf("UCLN = %d\n", a);
    return 0;
}
