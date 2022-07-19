#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

long long sumCS(long long n) {
	long long sum=0;
	while(n>0) {
		sum+=n%10;
		n/=10;
	}
	return sum;
}

long long sumNT(long long n) {
	long long sum=0;
	if(n==1) return sum;
	for(int i=2;i<=sqrt(n);i++) {
		while(n%i==0) {
			sum+=sumCS(i);
			n/=i;
		}
	}
	return sum+sumCS(n);
}

int main() {
	long long n;
	scanf("%lld", &n);
	if(sumCS(n)==sumNT(n)) printf("YES\n");
	else printf("NO\n");
}

