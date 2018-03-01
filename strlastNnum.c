#include <stdio.h>

int main(void) {
    int num,i,length=0;
    char str[100];
    scanf("%s%d",&str,&num);
    for(i=0;str[i]!='\0';i++)
    length++;
    int start=length-num;
    for(i=start;str[i]!='\0';i++)
    printf("%c",str[i]);
    return 0;
}
