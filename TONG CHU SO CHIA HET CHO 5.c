#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

bool prime(int n) {
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) return false;
	}
	return true;
}

int tcs(int n) {
	int sum=0;
	while(n!=0) {
		int tmp=n%10;
		sum+=tmp;
		n/=10;
	}
	return sum;
}

int main() {
	int n;
	scanf("%d", &n);
	int count=0;
	for(int i=5;i<=n;i=i+2) {
		if(prime(i) && (tcs(i)%5==0)) {
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d\n", count);
}

