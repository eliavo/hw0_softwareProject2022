#include <stdio.h>
#include <assert.h>

int b;
void printInB(int num) {
	if (num == 0) return;
	
	printInB(num/b);
	putchar(num%b<10?num%b+'0':num%b-10+'A');
}
	

int main() {
	int a;
	int num=0;
	char c;
	puts("> Please enter the numbers base:");
	scanf("%d", &a);
	assert(2<=a && a<=16 && "> Invalid numbers base");

	puts("> Please enter the desired base:");
	scanf("%d", &b);
	assert(2<=b && b<=16 && "> Invalid desired base");

	printf("> Please enter a number in base %d:", a);
	getchar();
	for(;;) {
		c = (char)getchar();
		if (c == EOF || c=='\n') break;
		if (a<=10)
			assert(c>='0' && c<='9'-10+a && "> Invalid number!");
		else
			assert(((c>='0' && c<='9') || (c>='A' && c<='F'-16+a)) && "> Invalid number!");
		
		num*=a;
		if (c<='9') num += c-'0';
		else num += c-'A'+10;
	}
	if (num == 0) putchar('0');
	else printInB(num);
	putchar('\n');

	return 0;
}
