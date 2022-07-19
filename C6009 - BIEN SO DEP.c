#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

bool tang(char c[]) {
	if(c[6]<c[7] && c[7]<c[8] && c[8]<c[10] && c[10]<c[11]) return true;
	return false;
}

bool bangnhau(char c[]) {
	if(c[6]==c[7] && c[7]==c[8] && c[8]==c[10] && c[10]==c[11]) return true;
	return false;
}

bool truocsau(char c[]) {
	if(c[6]==c[7] && c[7]==c[8] && c[10]==c[11]) return true;
	return false;
}

bool locphat(char c[]) {
	if(c[6]!='6' && c[6]!='8') return false;
	if(c[7]!='6' && c[7]!='8') return false;
	if(c[8]!='6' && c[8]!='8') return false;
	if(c[10]!='6' && c[10]!='8') return false;
	if(c[11]!='6' && c[11]!='8') return false;
	return true;
}

int main() {
	int t;
	scanf("%d",&t);
	getchar();
	while(t--) {
		char c[51];
		gets(c);
		if(tang(c) || bangnhau(c) || truocsau(c) || locphat(c)) printf("YES\n");
		else printf("NO\n");
	}
}

