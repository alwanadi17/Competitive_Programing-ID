#include <cstdio>

int main() {

	int a;

	scanf("%d", &a);

	if (a < 10) printf("satuan");
	else if (a < 100) printf("puluhan");
	else if (a < 1000) printf("ratusan");
	else if (a < 10000) printf ("ribuan");
	else printf("puluhribuan");

	return 0;
}