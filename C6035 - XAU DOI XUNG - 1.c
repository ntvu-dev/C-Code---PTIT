#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--) {
		char c[50];
		gets(c);
		int l=strlen(c);
		int count=0;
		for(int i=0;i<(l/2);i++) {
			if(c[i]!=c[l-i-1]) count++;
		}
		if(l%2==0) {
			if(count==1) printf("YES\n");
			else printf("NO\n");
		}
		else {
			if(count==0 || count==1) printf("YES\n");
			else printf("NO\n");
		}
	}
}

