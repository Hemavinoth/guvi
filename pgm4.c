#include <stdio.h>

int main(void) {
	char t;
	scanf("%c",&t);
	if((t>='a'&&t<='z')||(t>='A'&&t<='Z'))
	printf("Alphabet\n");
	else
	printf("Not Alphabet\n");
	return 0;
}
