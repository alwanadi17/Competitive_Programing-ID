#include <cstdio>
#include <cstdint>

int main() {

	uint8_t n;
	int num = 0;

	scanf("%hhd", &n);

	for (uint8_t i = 0; i < n; i++) {
		for (uint8_t j = 0; j <= i; j++)
			printf("%d", num++%10);
		putchar('\n');
	}

	return 0;
}