#include<stdio.h>
#include<math.h>

int loading(long long n) {
	while(n>0) {
		long long tmp=n%10;
		if(tmp%2!=0) {
			return 0;
		}
		else return 1;
		n/=10;
	}
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		long long n;
		scanf("%lld", &n);
		if(loading(n)) printf("YES\n");
		else printf("NO\n");
	}
}

