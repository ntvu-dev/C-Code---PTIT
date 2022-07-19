#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

long long check(long long n) {
	long long temp=sqrt(n);
	if(temp*temp==n) return temp;
	return 0;
}

long long swap(long long *a, long long *b) {
	long long tmp=*a;
	*a=*b;
	*b=tmp;
}

int main() {
	long long a, b, c, d, e, f;
	scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f);
	long long n=a*b+c*d+e*f;
	if(check(n)==0) {
		printf("NO");
		return 0;
	}
	else {
		long long canh=check(n);
		if(a>b) swap(&a,&b);
		if(c>d) swap(&c,&d);
		if(e>f) swap(&e,&f);
		if(b==d && d==f && f==canh) printf("YES");
		else {
			if(f==canh) {
				swap(&d,&b);
				swap(&c,&a);
			}
			if(d==canh) {
				swap(&f,&b);
				swap(&e,&a);
			}
			if(b==canh) {
				a=canh-a;
				if(c==a && e==a || c==a && f==a || d==a && e==a || d==a && f==a) printf("YES");
				else printf("NO");
			}
			else printf("NO");
		}
	}
}

