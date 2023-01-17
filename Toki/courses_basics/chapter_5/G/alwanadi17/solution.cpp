#include <cstdio>

int main(){

	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	a = a - c;
	b = b - d;

	if (a < 0) a *= -1;
	if (b < 0) b *= -1;

	printf("%d", a + b);

	return 0;
}