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

bool compare(char c1[], char c2[]) {
	char s1[205]={}, s2[205]={};
	strcpy(s1,c1);
	strcpy(s2,c2);
	chuanhoa(s1);
	chuanhoa(s2);
	if(strcmp(s1,s2)==0) return 1;
	return 0;
}

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	for(int z=1;z<=t;z++) {
		char s1[205], s2[50], a[205][205];
		gets(s1);
		gets(s2);
		chuanhoa(s2);
		int n=0;
		char *token=strtok(s1, " ");
		while(token!=NULL) {
			strcpy(a[n],token);
			n++;
			token=strtok(NULL, " ");
		}
		printf("Test %d: ", z);
		for(int i=0;i<n;i++) {
			char temp[205];
			strcpy(temp, a[i]);
			chuanhoa(temp);
			if(strcmp(temp, s2)==0) {
				continue;
			}
			printf("%s ", a[i]);
		}
		printf("\n");
	}
}

