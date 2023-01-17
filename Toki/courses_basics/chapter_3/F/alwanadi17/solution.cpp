#include <cstdio>
#include <cstdint>

int main() {

	uint8_t a[9] = {0};

	scanf("%hhd %hhd %hhd %hhd %hhd %hhd %hhd %hhd %hhd", 
			&a[0], &a[1], &a[2],
			&a[3], &a[4], &a[5],
			&a[6], &a[7], &a[8]);

	printf("%d %d %d\n%d %d %d\n%d %d %d", 
			a[0], a[3], a[6],
			a[1], a[4], a[7],
			a[2], a[5], a[8]);

	return 0;
}