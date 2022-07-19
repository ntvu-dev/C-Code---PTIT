#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int chan=0, le=0, n=0;
		char check=' ';
		while(check!='\n') {
			int value;
			scanf("%d", &value);
			n++;
			if(value%2==0) {
				chan++;
			}
			else le++;
			check=getchar();
		}
		if((n%2==0 && chan>le) || (n%2!=0 && le>chan)) printf("YES\n");
		else printf("NO\n");
	}
}

