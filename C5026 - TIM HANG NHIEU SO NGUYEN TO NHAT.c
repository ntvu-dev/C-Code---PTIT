#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#define max(a,b) (((a)>(b))?(a):(b))

int prime[10000005];

void sieve() {
	prime[0]=prime[1]=1;
	for(int i=0;i<=100;i++) {
		if(prime[i]==0) {
			for(int j=i*i;j<=100000;j+=i) {
				prime[j]=1;
			}
		}
	}
}

int n, a[100][100];

int main() {
	sieve();
	scanf("%d", &n);
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int count=0, res=-1e6, vt=0;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			if(prime[a[i][j]]==0) count++;
		}
		if(count>res) {
		res=count;
		vt=i;
	    }
	    count=0;
	}
	printf("%d\n", vt);
	for(int j=1;j<=n;j++) {
		if(prime[a[vt][j]]==0) printf("%d ", a[vt][j]);
	}
}

