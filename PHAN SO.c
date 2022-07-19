#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int ucln(int a, int b) {
	if(b==0) return a;
	return ucln(b, a%b);
}

int bcnn(int c, int d) {
	int x=ucln(c,d);
	return (c*d)/x;
}

struct phanso {
	int t, m;
};

typedef struct phanso phanso;
phanso rutgon(phanso a) {
	int uoc=ucln(a.t, a.m);
	a.t/=uoc;
	a.m/=uoc;
	return a;
}

void loading(phanso a, phanso b) {
	a=rutgon(a);
	b=rutgon(b);
	int mauchung=bcnn(a.m, b.m);
	a.t=mauchung/a.m*a.t;
	b.t=mauchung/b.m*b.t;
	a.m=b.m=mauchung;
	printf("%d/%d %d/%d\n", a.t, a.m, b.t, b.m);
	phanso tong, thuong;
	tong.t=a.t+b.t;
	tong.m=mauchung;
	tong=rutgon(tong);
	printf("%d/%d\n", tong.t, tong.m);
	thuong.t=a.t*b.m;
	thuong.m=b.t*a.m;
	thuong=rutgon(thuong);
	printf("%d/%d\n", thuong.t, thuong.m);
}

int main() {
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++) {
		phanso a, b;
		printf("Case #%d:\n", i);
		scanf("%d%d%d%d", &a.t, &a.m, &b.t, &b.m);
		loading(a, b);
	}
}


