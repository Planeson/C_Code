#include < stdio.h >
int main() {
    long long a, t, n, b, c, i, j, m;
    while (scanf_s("%lld", &t) == 1) {
        for (i = 0; i < t; i++) {
            m = 0;
            scanf_s("%lld", &n);
            for (j = 0; j < n; j++) {
                scanf_s("%lld%lld%lld", &a, &b, &c);
                m += a * c;
            }
            printf("%lld\n", m);
        }
    }
}