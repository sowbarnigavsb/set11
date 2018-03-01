#include <stdio.h>

int main(void) {
    int num,ans;
    scanf("%d",&num);
      if(num%2!=0)
       printf("%d",num);
    for(int i=0;i<num;i++)  
    {
    if(num%2==0)
   {
    ans=num/2;
    printf("%d\n",ans);
    num=ans;
   }}
 

    
    return 0;
}
