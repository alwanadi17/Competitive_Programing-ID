#include <cstdio>
#include <cstdint>

bool primeCheck(int n) {

	for (uint16_t j = 2; j*j <= n; j++) {
		if (!(n%j)) return false;
	}

	return true;
}

int main() {

	uint16_t n;
	int num;

	scanf("%hd", &n);

	for (uint16_t i = 0; i < n; i++) {
		scanf("%d", &num);

		if (primeCheck(num)) printf("YA\n");
		else printf("BUKAN\n");
	}

	return 0;
}