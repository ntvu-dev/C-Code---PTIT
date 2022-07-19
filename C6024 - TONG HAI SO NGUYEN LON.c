#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#define max(a,b) (((a)>(b))?(a):(b))

void daonguoc(int a[], int n) {
	int l=0, r=n-1;
	while(l<r) {
		int temp=a[l];
		a[l]=a[r];
		a[r]=temp;
		++l;
		--r;
	}
}

void bignum(char a[], char b[]) {
	int l1=strlen(a), l2=strlen(b), n=0;
	int x[l1], y[l1], z[l1+1];
	for(int i=0;i<l1;i++) {
		x[i]=a[i]-'0';
	}
	for(int i=0;i<l2;i++) {
		y[i]=b[i]-'0';
	}
	daonguoc(x,l1);
	daonguoc(y,l2);
	for(int i=l2;i<l1;i++) {
		y[i]=0;
	}
	int nho=0;
	for(int i=0;i<l1;i++) {
		int temp=x[i]+y[i]+nho;
		z[n++]=temp%10;
		nho=temp/10;
	}
	if(nho==1) z[n++]=nho;
	for(int i=n-1;i>=0;i--) {
		printf("%d", z[i]);
	}
}

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--) {
		char a[505], b[505];
		gets(a);
		gets(b);
		int l1=strlen(a), l2=strlen(b);
		if(l1>=l2) bignum(a,b);
		else bignum(b,a);
		printf("\n");
	}
}

