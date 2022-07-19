#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

//long long GCD(long long a, long long b) {
//	if( a==0 || b==0 ) {
//		return a+b;
//	}
//	else {
//		while(a!=b) {
//			if(a>b) {
//				a=a-b;
//			}
//			else b=b-a;
//		}
//	}
//	return a;
//}

long long GCD(long long a, long long b) {
	if(b==0) return a;
	return GCD(b,a%b);
}

void loading() {
	long long n;
	scanf("%lld", &n);
	long long res=1;
	for(long long i=2;i<=n;i++) {
		long long UCLN=GCD(res,i);
		res=res*i/UCLN;
	}
	printf("%lld\n", res);
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		loading();
	}
}

