#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

void chuanhoa(char c[]) {
	for(int i=0;i<strlen(c);i++) {
		c[i]=tolower(c[i]);
	}
}

int main() {
	char c[55], a[50][55];
	gets(c);
	char *token=strtok(c, " ");
	int n=0;
	while(token!=NULL) {
		strcpy(a[n],token);
		++n;
		token=strtok(NULL, " ");
	}
	for(int i=0;i<n-1;i++) {
		chuanhoa(a[i]);
		printf("%c", a[i][0]);
	}
	chuanhoa(a[n-1]);
	printf("%s@ptit.edu.vn", a[n-1]);
	printf("\n");
}

