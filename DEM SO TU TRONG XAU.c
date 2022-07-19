#include<stdio.h>
#include<math.h>
#include<string.h>

int dem(char s[], int leng) {
	int count=0;
	if(s[0]!=' ') count=1;
	for(int i=0;i<leng-1;i++) {
		if(s[i]==' ' && s[i+1]!=' ') {
			count++;
		}
	}
	return count;
} 

int main() {
	int t;
	scanf("%d", &t);
	getchar();
    for(int i=0;i<t;i++) {
		char s[201];
		gets(s);
		int leng=strlen(s);
		printf("%d\n", dem(s,leng));
		leng=0;
	}
}

