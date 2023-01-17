#include <cstdio>
#include <cstring>

int main() {

	char ret[101];
	memset(ret, 0, sizeof(ret));

	scanf("%100[^\n]", ret);

	printf("%s", ret);

	return 0;
}