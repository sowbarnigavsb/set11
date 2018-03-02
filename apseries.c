#include <stdio.h>

int main(void) {
	int a,b,c,sum=0;
	scanf("%d%d%d",&a,&b,&c);
	for(int i=1;i<=a;i++)
	{
	sum=sum+c;
	c=c+b;
	}
            printf("%d",sum);
	// your code goes here
	return 0;
}
