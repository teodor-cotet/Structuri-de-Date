#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check[100];
char *p;
void perm(char *s, int count) {

	if(count == strlen(s))
		printf("%s\n", p);
	else 
		for(int i = 0 ;i < strlen(s); ++i)
			if(check[i] == 0) {
				p[count] = s[i];
				check[i] = 1;
				perm(s, count + 1);
				check[i] = 0;	
			}
				
}

int main() {
	
	char *s = malloc(100);
	p = malloc(100);
	scanf("%s", s);
	perm(s, 0);
	return 0;
}
