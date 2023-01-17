#include <cstdio>
#include <cstdint>

int main() {

	unsigned short n, tmp;
	unsigned int sum = 0;

	scanf("%hd", &n);
	for (uint16_t i = 0; i < n; i++) {
		scanf("%hd", &tmp);
		sum += tmp;
	}
	

	printf("%d", sum);
	return 0;
}