#include <stdio.h>

int main() {
    int a, b, choice;
    scanf("%d%d", &a, &b);

    do {
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Ket qua: %d\n", a + b);
                break;
            case 2:
                printf("Ket qua: %d\n", a - b);
                break;
            case 3:
                printf("Ket qua: %d\n", a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Ket qua: %.2f\n", (float)a / b);
                else
                    printf("Khong the chia cho 0\n");
                break;
            case 5:
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while (choice != 5);

    return 0;
}
