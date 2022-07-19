#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

//bool checktn(char s[]) {
//	int l=0, r=strlen(s)-1;
//	while(r>l) {
//		if(s[l++]!=s[r--]) {
//			return false;
//			break;
//		}
//	}
//	return true;
//}
//
//bool checknt(char s[]) {
//	for(int i=0;i<strlen(s)-1;i++) {
//		if(s[i]!=2 || s[i]!=3 || s[i]!=5 || s[i]!=7) {
//			return false;
//			break;
//		}
//	}
//	return true;
//}

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--) {
		char s[505];
		gets(s);
		bool checktn=true, checknt=true;
		int i;
		for(i=0;i<strlen(s);i++) {
			if(s[i]!='2' && s[i]!='3' && s[i]!='5' && s[i]!='7') {
			    checknt=false;
		    }
		    if(s[i] != s[strlen(s)-1-i]) {
				checktn=false;
				break;
			}
		}
		if(checknt==true && checktn==true) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
		i=0, checknt=true;
	}
	return 0;
}

