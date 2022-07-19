#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

bool tn(char s[]) {
	int l=0, r=strlen(s)-1;
	while(r>l) {
		if(s[l++]!=s[r--]) {
			return false;
			break;
		}
	}
	return true;
}

long long tcs(char s[]) {
	long long sum=0;
	for(int i=0;i<=strlen(s)-1;i++) {
		sum=sum+(s[i]-'0');
	}
	return sum;
}

bool checkse(char s[]) {
	if(s[0]=='8' && s[strlen(s)-1]=='8') {
		return true;
	}
	return false;
}

int main() {
	int t;
	scanf("%d", &t);
	fflush(stdin);
	while(t--) {
		char s[505];
		scanf("%s", &s);
		if((tcs(s)%10==0) && checkse(s) && tn(s)) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}

