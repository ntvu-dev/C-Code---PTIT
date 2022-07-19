#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

bool checktn(long long n) {
	long long temp=n, sum=0;
	while(temp>0) {
		sum=sum*10 + temp%10;
		temp/=10;
	}
	if(sum==n) return 1;
	return 0;
}

bool sum(long long n) {
	int sum=0;
	while(n>0) {
		sum+=n%10;
		n/=10;
	}
	if(sum%2==0) return 0;
	return 1;
}

bool checkcs(long long n) {
	int temp;
	while(n>0) {
		temp=n%10;
		if(temp%2!=0) {
			n/=10;
			continue;
		}
		else {
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
		long long n;
		scanf("%lld", &n);
		if(checktn(n) && checkcs(n) && sum(n)) printf("YES\n");
		else printf("NO\n");
	}
}

