#include <cstdio>
#include <cstdint>

int main() {

	uint8_t n;

	scanf("%hhd", &n);

	for (uint8_t i = n; i > 0; i--){
		for (uint8_t j = 0; j < n; j++) {
			if (j < i-1) putchar(' ');
			else putchar('*');
		}
		putchar('\n');
	}

	return 0;
}