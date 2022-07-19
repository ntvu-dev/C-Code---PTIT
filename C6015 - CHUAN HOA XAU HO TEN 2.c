#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

void chuanhoa(char c[]) {
	c[0]=toupper(c[0]);
	for(int i=1;i<strlen(c);i++) {
		c[i]=tolower(c[i]);
	}
}

void chuanhoaho(char c[]) {
	for(int i=0;i<strlen(c);i++) {
		c[i]=toupper(c[i]);
	}
}

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--) {
		char c[55], a[100][55];
		gets(c);
		int n=0;
		char *token=strtok(c, " ");
		while(token!=NULL) {
			strcpy(a[n],token);
			++n;
			token=strtok(NULL, " ");
		}
		for(int i=1;i<n;i++) {
			chuanhoa(a[i]);
			printf("%s", a[i]);
			if(i!=n-1) printf(" ");
		}
		chuanhoaho(a[0]);
		printf(", %s", a[0]);
		printf("\n");
	}
}

