#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

void swap(long long *a, long long *b) {
	long long tmp=*a;
	*a=*b;
	*b=tmp;
}

bool prime(long long n) {
	if(n<2) return 0;
	for(long long i=2;i<=sqrt(n);i++) {
		if(n%i==0) return 0;
	}
	return 1;
}

bool check(long long n) {
	int temp;
	long long sum=0;
	while(n>0) {
		temp=n%10;
		sum+=temp;
		if(temp!=2 && temp!=3 && temp!=5 && temp!=7) {
			return 0;
		}
		n/=10;
	}
	if(prime(sum)) return 1;
	return 0;
}

void loading() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if(a>b) swap(&a,&b);
	int count=0;
	for(long long i=a;i<=b;i++) {
		if(check(i)) {
			if(prime(i)) {
			    count++;	
			}
		}
	}
	printf("%d\n", count);
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
	    loading();
	}
}

