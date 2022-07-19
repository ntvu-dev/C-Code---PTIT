#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

bool check(long long n) {
	if(n<2) return 0;
	for(long long i=2;i<=sqrt(n);i++) {
		if(n%i==0) {
			return 0;
		}
	}
	return 1;
}

void loading() {
	long long n, value;
		scanf("%lld", &n);
		for(long long i=1;i<=sqrt(n);i++) {
			if(n%i==0) {
				if(check(n/i)) {
					printf("%lld\n", n/i);
					return;
				}
				if(check(i)) {
					value=i;
				}
			}
		}
		printf("%lld\n", value);
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		loading();
	}
}

