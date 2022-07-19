#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

bool check(char c[]) {
	int l=strlen(c);
	if((c[0]-'0')*2!=(c[l-1]-'0') && (c[0]-'0')!=2*(c[l-1]-'0')) {
		return 0;
	}
	for(int i=1;i<(l/2);i++) {
		if(c[i]!=c[l-i-1]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--) {
		char c[20];
		gets(c);
		if(check(c)) printf("YES\n");
		else printf("NO\n");
	}
}

