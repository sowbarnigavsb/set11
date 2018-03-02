#include <stdio.h>

int main(void) {
	int n,k,pow=1;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=k;i++)
	{
		pow=pow*n;
	}
	printf("%d",pow);
	// your code goes here
