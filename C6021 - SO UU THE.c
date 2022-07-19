#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

int loading(char c[]) {
	int l=strlen(c), chan=0, le=0;
	if(c[0]=='0') return 2;
	for(int i=0;i<l;i++) {
		if(c[i]>='0' && c[i]<='9') {
			if((c[i]-'0') % 2 == 0) chan++;
			else le++;
		}
		else {
			return 2;
			break;
		}
	}
	if(l%2==0 && chan>le) {
		return 1;
	}
	return 0;
}

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--) {
		char c[1005];
		gets(c);
		int temp=loading(c);
		if(temp==2) printf("INVALID\n");
		else if(temp==1) printf("YES\n");
		else printf("NO\n");
	}
}

