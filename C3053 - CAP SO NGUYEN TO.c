#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

bool check(int n) {
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) {
			return 0;
			break;
		}
	}
	return 1;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		if(check(n-2)) printf("2 %d ", n-2);
		for(int i=3;i<=(n/2);i++) {
			if(check(i) && check(n-i)) {
				printf("%d %d ", i, n-i);
			}
		}
		printf("\n");
	}
}

