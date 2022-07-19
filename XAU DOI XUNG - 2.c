#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
	char s[100001];
	gets(s);
	int length=strlen(s);
	printf("%d", length-1);
}

