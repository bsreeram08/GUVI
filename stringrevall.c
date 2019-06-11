#include <stdio.h>
#include<string.h>
int main() {
	char arr[1000];
	while(scanf("%s",arr)>0)
	{
	    for(int i=strlen(arr)-1;i>=0;i--)
	    {
	        printf("%c",arr[i]);
	    }
	    printf(" ");
	}
	return 0;
}
