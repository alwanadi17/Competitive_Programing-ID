#include <cstdio>

int main(){

	unsigned int sum = 0;
	short n;

	while(scanf("%hd", &n) != EOF)
		sum += n;
	printf("%d", sum);

	return 0;
}