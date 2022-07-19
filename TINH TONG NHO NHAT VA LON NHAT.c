#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

long long convert(char s[]) {
	long long sum=0;
	for(int i=0;i<strlen(s);i++) {
		sum=sum*10+(s[i]-'0');
	}
	return sum;
}

long long summin(char s1[], char s2[]) {
	for(int i=0;i<strlen(s1);i++) {
		if(s1[i]=='6') {
			s1[i]='5';
		}
	}
	for(int i=0;i<strlen(s2);i++) {
		if(s2[i]=='6') {
			s2[i]='5';
		}
	}
	return convert(s1)+convert(s2);
}

long long summax(char s1[], char s2[]) {
	for(int i=0;i<strlen(s1);i++) {
		if(s1[i]=='5') {
			s1[i]='6';
		}
	}
	for(int i=0;i<strlen(s2);i++) {
		if(s2[i]=='5') {
			s2[i]='6';
		}
	}
	return convert(s1)+convert(s2);
}

int main() {
	int t;
	scanf("%d", &t);
	fflush(stdin);
	while(t--) {
		char s1[20], s2[20];
		scanf("%s%s",&s1,&s2);
		printf("%lld %lld\n", summin(s1,s2), summax(s1,s2));
	}
}

