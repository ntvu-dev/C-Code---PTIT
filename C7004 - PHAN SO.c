#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int GCD(int a, int b) {
	if(b==0) return a;
	return GCD(b, a%b);
}

int LCM(int a, int b) {
	return a/GCD(a,b)*b;
}

struct phanso{
	int tu, mau;
};

typedef struct phanso PS;

PS rutgon(PS a) {
	int UCLN = GCD(a.tu, a.mau);
	a.tu/=UCLN;
	a.mau/=UCLN;
	return a;
}

void loading(PS a, PS b) {
	a=rutgon(a);
	b=rutgon(b);
	int mau=LCM(a.mau,b.mau);
	a.tu=mau/a.mau*a.tu;
	b.tu=mau/b.mau*b.tu;
	a.mau=b.mau=mau;
	printf("%d/%d %d/%d\n", a.tu, a.mau, b.tu, b.mau);
	PS tong, thuong;
	tong.tu=a.tu+b.tu;
	tong.mau=mau;
	tong=rutgon(tong);
	printf("%d/%d\n", tong.tu, tong.mau);
	thuong.tu=a.tu*b.mau;
	thuong.mau=a.mau*b.tu;
	thuong=rutgon(thuong);
	printf("%d/%d\n", thuong.tu, thuong.mau);
}

int main() {
	int t;
	scanf("%d", &t);
	for(int z=1;z<=t;z++) {
		PS a, b;
		scanf("%d%d%d%d", &a.tu, &a.mau, &b.tu, &b.mau);
		printf("Case #%d:\n", z);
		loading(a,b);
	}
}

