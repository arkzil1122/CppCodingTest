#include <stdio.h>

int main() {
	int tick;
	scanf("%d", &tick);

	// 둘째자리까지는 맞아야 하니까
	printf("%.2lf", tick / 4.0);

	return 0;
}