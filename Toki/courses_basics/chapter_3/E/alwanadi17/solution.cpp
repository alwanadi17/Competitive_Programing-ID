#include <cstdio>
#include <cstdint>

int main() {

	uint16_t a,t;

	scanf("%hd %hd", &a, &t);
	printf("%.2lf", 0.5*a*t);

	return 0;
}