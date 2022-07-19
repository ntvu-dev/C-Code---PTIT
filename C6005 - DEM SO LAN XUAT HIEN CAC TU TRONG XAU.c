#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

void chuanhoa(char c[]) {
	int l=strlen(c);
	for(int i=0;i<l;i++) {
		c[i]=tolower(c[i]);
	}
}

int main() {
	char c[1005];
	gets(c);
	chuanhoa(c);
	char a[200][50];
	int n=0;
	char *token=strtok(c, " ");
	while(token!=NULL) {
		strcpy(a[n], token);
		++n;
		token=strtok(NULL, " ");
	}
	int b[10000]={0};
	for(int i=0;i<n;i++) {
		if(b[i]==0) {
			int count=1;
			for(int j=i+1;j<n;j++) {
				if(strcmp(a[i], a[j])==0) {
					count++;
					b[j]=1;
				}
			}
			printf("%s %d\n", a[i], count);
		}
	}
}

