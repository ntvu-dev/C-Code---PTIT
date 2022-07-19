#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

void loading(int n) {
	int count;
	for(int i=2;i<=n;i++) {
		count=0;
		while(n%i==0) {
			count++;
			n=n/i;
		}
		if(count!=0) {
			printf("%d^%d", i, count);
		    if(n>i) {
		    	printf(" * ");
			}
		}
		if(n==1) break;
	}
	printf("\n");
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		printf("%d = ", n);
		loading(n);
	}
}

