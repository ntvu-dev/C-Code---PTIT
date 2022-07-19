#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int a,b,c,d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		int c1=c-a, c2=d-b;
		if(c1==c2) printf("YES\n");
		else printf("NO\n");
	}
}

