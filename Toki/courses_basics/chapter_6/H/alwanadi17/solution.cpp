#include <cstdio>
#include <cstdint>

int main() {

	uint8_t n, k, i;

	scanf("%hhd %hhd", &n, &k);

	for(i = 1; i < n; i++) {
		if (!(i%k)) printf("* ");
		else printf("%d ", i);
	}

	if (!(i%k)) printf("*\n");
	else printf("%d\n", i);

	return 0;
}