#include <stdio.h>
#include <assert.h>

int main() {
	int a, b;
	puts("> Please enter the numbers base:");
	scanf("%d", &a);
	assert(2<=a && a<=16 && "> Invalid numbers base");

	puts("> Please enter the desired base:");
	scanf("%d", &b);
	assert(2<=b && b<=16 && "> Invalid desired base");

	return 0;
}
