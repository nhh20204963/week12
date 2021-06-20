#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	printf("Enter string :");
	gets(s);
/*dung ham co san	
	printf("\nInverse string : %s", strrev(s));
*/	
	int i;
	int n = strlen(s);
	printf("\nInverse string: ");
	for(i = n - 1; i >= 0; i--){
		printf("%c", s[i]);
	}
}
