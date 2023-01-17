#include <cstdio>

int main(){

	float a;
	int n;

	scanf("%f", &a);
	n = a;

	if(a == n) printf("%d %d", n, n);
	else if (a > 0) printf("%d %d", n, n+1);
	else printf("%d %d", n-1, n);

	return 0;
}