#include<stdio.h>
#include<math.h>

int sumcs(long n) {
	long temp;
	int sum=0;
	while(n!=0) {
		temp=n%10;
		sum+=temp;
		n=n/10;
	}
	return sum;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		long n;
		scanf("%ld", &n);
		if((sumcs(n)%10)==0) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}


