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
	int t;
	scanf("%d", &t);
	while(t--) {
	    long a, b;
	    scanf("%ld%ld", &a, &b);
	    int value=USCLN(a,b);
	    printf("%lld %ld\n", a*b/value, USCLN(a,b));		
	}
}

