#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a + b;

    printf("%d %d", a, b);
    return 0;
}