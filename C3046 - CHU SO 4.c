#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

//bool checktn(long long n) {
//	int temp=n, sum=0;
//	while(n>0) {
//		sum=sum*10+temp%10;
//		temp/=10;
//	}
//	if(sum==n) return 1;
//	return 0;
//}

bool check(long long n) {
	int sum=0, value=0;
	long long m=n;
	while(n>0) {
		int temp=n%10;
		if(temp==4) {
			return 0;
		}
		sum+=temp;
		value= value*10 + temp;
		n/=10;
	}
	if(sum%10==0 && value==m) return 1;
	return 0;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		long long l=pow(10,n-1), r=pow(10,n)-1;
		for(long long i=l;i<=r;i++) {
			if(check(i)) printf("%d ", i);
		}
		printf("\n");
	}
}

