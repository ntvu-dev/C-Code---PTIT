#include<stdio.h>
#include<math.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	if(a>b) {
		int temp=a;
		a=b;
		b=temp;
	}
	long long sum=0;
	for(int i=a;i<=b;i++) {
		sum+=i;
	}
	printf("%lld", sum);
}

