#include<stdio.h>
#include<math.h>

int main() {
	int t;
	long long n;
	scanf("%d", &t);
	while(t--) {
	    scanf("%lld", &n);
	    int i=sqrt(n);
	    if(i*i==n) printf("YES\n");
	    else printf("NO\n");
	}
}
