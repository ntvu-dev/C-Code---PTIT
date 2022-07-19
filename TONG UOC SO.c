#include<stdio.h>
#include<math.h>
#include<string.h>

long long loading(long long n) {
	long long sum=0;
	for(long long i=2;i<=n;i++) {
		while(n%i==0) {
			if(n%i==0) {
				sum+=i;
			    n/=i;
			}
		}
		if(n==1) {
			break;
		}
	}
	return sum;
}

int main() {
	int n;
	scanf("%d", &n);
	long long sum=0;
	long long a[n];
	for(long long i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	for(long long i=0;i<n;i++) {
		sum+=loading(a[i]);
	}
	printf("%lld\n", sum);
}

