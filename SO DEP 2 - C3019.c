#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int tcs(long long n) {
	int temp=0;
	while(n!=0) {
		temp=temp+n%10;
		n/=10;
	}
	return temp;
}

bool tn(long long n) {
	long long temp;
	int sum=0;
	temp=n;
	while(n>0) {
		int chuso=n%10;
		sum=sum*10+chuso;
		n/=10;
	}
	if(temp==sum) {
		return true;
	}
	else {
		return false;
	}
	return true;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		long long n;
		scanf("%lld", &n);
		int count=0;
		long long a=pow(10,n-1),b=pow(10,n);
		for(long long i=a;i<b;i++) {
			if(tn(i) && (tcs(i)%10==0)) count++;
		}
		printf("%d\n", count);
	}
}

