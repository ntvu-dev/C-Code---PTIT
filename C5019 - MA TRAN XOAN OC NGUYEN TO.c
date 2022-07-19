#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int n, a[105][105], prime[10000005];

void sieve() {
	prime[0]=prime[1]=1;
	for(int i=0;i<=1000;i++) {
		if(prime[i]==0) {
			for(int j=i*i;j<=1000000;j+=i) {
				prime[j]=1;
			}
		}
	}
}

int dd[100005];

int main() {
	sieve();
	int t;
	scanf("%d", &t);
	for(int z=1;z<=t;z++) {
		printf("Test %d:\n", z);
		scanf("%d", &n);
		int count=-1;
		for(int i=1;i<=3000;i++) {
			if(prime[i]==0) dd[++count]=i;
		}
		int value=1, cot=n-1, hang=n-1, d=0;
		count=0;
		while(d<=(n/2)) {
			for(int i=d;i<=cot;i++) {
				a[d][i]=dd[count++];
			}
			for(int i=d+1;i<=hang;i++){
				a[i][cot]=dd[count++];
			}
			for(int i=cot-1;i>=d;i--) {
				a[hang][i]=dd[count++];
			}
			for(int i=hang-1;i>d;i--) {
				a[i][d]=dd[count++];
			}
			d++;
			hang--;
			cot--;
		}
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

