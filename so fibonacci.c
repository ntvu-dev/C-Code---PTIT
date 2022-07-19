#include<stdio.h>
#include<math.h>
#include<stdbool.h>

long long fibo(int n) {
	long long f[92];
	if(n<2) {
		return 1;
	}
	else {
		f[0]=f[1]=1;
		for(int i=2;i<=92;i++) {
			f[i]=f[i-1]+f[i-2];
		}
	}
	return f[n];
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		printf("%lld\n", fibo(n-1));
	}
}

