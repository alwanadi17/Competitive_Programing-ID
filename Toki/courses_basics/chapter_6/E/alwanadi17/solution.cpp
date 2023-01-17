#include <cstdio>

int main(){

	unsigned int num;

	scanf("%d", &num);

	while(num%2 != 1)
		num >>= 1;

	if (num == 1) printf("ya");
	else printf("bukan");

	return 0;
}