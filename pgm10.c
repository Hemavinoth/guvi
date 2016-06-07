#include <stdio.h>

int main(void) {
	int n,i,j;
	scanf("%d",&n);
	int arr[n],arr2[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	{
		if(arr[i]==arr[j])
		{
			arr2[i]=11;
			arr2[j]=11;
	}
}
	for(i=0;i<n;i++)
	if(arr2[i]!=11)
	printf("%d",arr[i]);
	return 0;
}
