#include <stdio.h>

int main() {
	/*i for input, n for line num, m for int num*/
	int i,n,m;
	scanf_s("%d", &i);
	for (n = 1; n <= i; ++n) {
		printf("%d", (n * n));
		for (m = 1; m < i; ++m) {
			printf("%d", ((n * n) + (n * m)));
		}
		printf("\n");
	}
}