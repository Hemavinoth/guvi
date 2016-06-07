#include <stdio.h>

int main(void) {
	int t,u,v;
	scanf("%d%d%d",&t,&u,&v);
	if(t>u&&t>v)
	printf("%d\n",t);
	else if(u>t&&u>v)
	printf("%d\n",u);
	else
	printf("%d\n",v);
	return 0;
}
