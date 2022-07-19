#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

bool loading(long long n) {
	int temp=n%10;
	n/=10;
	while(n>0) {
		if(n%10 <= temp) {
			return 0;
		}
		temp=n%10;
		n/=10;
	}
	return 1;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		long long a, b;
		scanf("%lld %lld", &a, &b);
		int count=0;
		for(int i=a;i<=b;i++) {
			if(loading(i)) {
				count++;
			}
		}
		printf("%d\n", count);
	}
}

