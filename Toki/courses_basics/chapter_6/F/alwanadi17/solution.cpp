#include <cstdio>

int main() {

	int n;

	scanf("%d", &n);

	for (int i = n; i > 0; i--)
		if (!(n%i)) printf("%d\n", i);

	return 0;
}