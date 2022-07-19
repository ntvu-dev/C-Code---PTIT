#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

long long GCD(long long a, long long b) {
	if(b==0) return a;
	return GCD(b,a%b);
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, m;
		scanf("%d%d", &n, &m);
		long long res=1;
		for(int i=n;i<=m;i++) {
			long long UC=GCD(res,i);
			res=res*i/UC;
		}
		printf("%lld\n", res);
	}
}

