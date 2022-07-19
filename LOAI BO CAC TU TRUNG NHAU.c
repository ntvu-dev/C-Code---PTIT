#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void loading() {
	char s[1001];
	gets(s);
	char a[1001][1001];
	int n=0;
	char *t=strtok(s, " ");
	while(t!=NULL) {
		strcpy(a[n],t);
		++n;
		t=strtok(NULL, " ");
	}
	int b[1001]={0};
	for(int i=0;i<n;i++) {
		if(b[i]==0) {
			int count=1;
			for(int j=i+1;j<n;j++) {
				if(strcmp(a[i], a[j])==0) {
					count++;
					b[j]=1;
				}
			}
			printf("%s ", a[i]);
		}
	}
}

int main() {
	loading();
}

