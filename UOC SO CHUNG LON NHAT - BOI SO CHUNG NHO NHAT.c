#include<stdio.h>
#include<math.h>

long USCLN(long a, long b) {
	long x=a, y=b;
	while(y!=0) {
		int temp=x%y;
		x=y;
		y=temp;
	}
	return x;
}

int main() {
	long a, b;
	scanf("%ld%ld", &a, &b);
	int value=USCLN(a,b);
	printf("%ld\n%lld\n", USCLN(a,b), a*b/value);
}

