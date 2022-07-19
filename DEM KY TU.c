#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
	char s[1005];
	int chu=0, so=0, khac=0;
	gets(s);
	int l=strlen(s)
	for(int i=0;i<l;i++) {
		if((s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z')) {
			chu++;
		}
		else if(s[i]>='0'&&s[i]<='9') {
			so++;
		}
		else {
			khac++;
		}
	}
	printf("%d %d %d", chu, so, khac);
}
