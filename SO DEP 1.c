#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

int main() {
	int t;
	scanf("%d", &t);
	fflush(stdin);
	while(t--) {
		char s[505];
		scanf("%s", s);
		bool check1=true, check2=true;
		for(int i=0;i<strlen(s)-1;i++) {
			if((s[i]-'0')%2 != 0) {
				check1=false;
				break;
			}
			if(s[i] != s[strlen(s)-i-1]) {
				check2=false;
				break;
			}
		}
		if(check1 && check2) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}

