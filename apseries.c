#include <stdio.h>

int main(void) {
	int a,b,c,sum=0;
	scanf("%d%d%d",&a,&b,&c);
	for(int i=1;i<=c;i++)
	{
	sum=sum+a;
	a=a+b;
	}
            printf("%d",sum);
	// your code goes here
	return 0;
}
