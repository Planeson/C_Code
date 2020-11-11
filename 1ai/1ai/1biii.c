#include <stdio.h>

int main() {
	int i, n, m, a;
	a = 1;
	scanf_s("%d", &i);
	for (n = 1; n <= i; ++n) {
		for (m = 1; m <= n; ++m) {
			printf("%d", a);
			++a;
		}
		printf("\n");
	}
	for (n = i - 1; n >= 1; --n) {
		for (m = n; m >= 1; --m) {
			printf("%d", a);
			++a;
		}
		printf("\n");
	}
}