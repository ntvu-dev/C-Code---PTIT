#include<stdio.h>
#include<math.h>
#include<string.h>

void erase(char s[], char s1[]) {
	int len=strlen(s);
	int len2=strlen(s1);
	for(int i=0;i<len;i++) {
		if(s[i]==s1[0] && s[i+len2-1]==s1[len2-1]) {
			int j;
			for(j=i;j<len;j++) {
				s[j]=s[j+len2];
			}
			s[j+len2]='\0';
		}
	}
	puts(s);
}

int main() {
	char s[101], s1[101];
	gets(s);
	gets(s1);
	erase(s,s1);
}

