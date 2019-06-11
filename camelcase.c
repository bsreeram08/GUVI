#include <stdio.h> 
int main() {
	char data[1000];
	while(scanf("%s",data)>0)
	{
	    if(isalpha(data[0]))
	        data[0]=toupper(data[0]);
	    for(int i=1;i<strlen(data);i++)
	    {
	        data[i]=tolower(data[i]);
	    }
	    printf("%s ",data);
	}
	printf("%c",8);
	return 0;
}
