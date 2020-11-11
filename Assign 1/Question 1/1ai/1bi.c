#include <stdio.h>

int main() {
    int i,n,m,a;
    a = 1;
    scanf_s("%d", &i);
    for (n = 1; n <=i; n = n + 1) {
        printf("%d", a);
        for (m = 1; m < i; m = m + 1) {
            a = a + 4;
            printf(" %d", a);
        }
        printf("\n");
    }
}