#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int weekday = (6 + n) % 7;
    switch (weekday) {
        case 0:
            printf("������");
            break;
        case 1:
            printf("����һ");
            break;
        case 2:
            printf("���ڶ�");
            break;
        case 3:
            printf("������");
            break;
        case 4:
            printf("������");
            break;
        case 5:
            printf("������");
            break;
        case 6:
            printf("������");
            break;
    }
    return 0;
}
