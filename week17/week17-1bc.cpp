#include <stdio.h>
#include <string.h>
int main()
{
	char s[200];
	scanf("%s",&s);
	int N = strlen(s);
	for(int i=0;i<N;i++){
		if(s[i]!='2') printf("%c",s[i]);
	}
	printf("\n");
}