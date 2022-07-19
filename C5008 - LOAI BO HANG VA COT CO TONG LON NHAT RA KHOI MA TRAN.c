#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#define max(a,b) (((a)>(b))?(a):(b))

int m, n, i=0, j=0;
int res=-1e9, resc=-1e9, resh=-1e9, vth=0, vtc=0;
int a[101][101];

int main() {
	int t;
	scanf("%d", &t);
	for(int z=1;z<=t;z++) {	
	    printf("Test %d:\n", z);
		scanf("%d%d", &n, &m);
		int sumh=0, sumc=0;
		for(i=1;i<=n;i++) {
			for(int j=1;j<=m;j++) {
				scanf("%d", &a[i][j]);
			}
		}
		for(i=1;i<=n;i++) {
			int hang=i;
			for(j=1;j<=m;j++) {
				sumh+=a[hang][j];
			}
			if(sumh>res) {
				res=sumh;
				vth=i;
			}
			sumh=0;
		}
		for(i=vth;i<=n;i++) {
			for(int j=1;j<=m;j++) {
				a[i][j]=a[i+1][j];
			}
		}
		n=n-1;
		int tmp=0;
		for(int i=1;i<=n;i++) {
			tmp=i;
			for(int j=1;j<=m;j++) {
				if(i!=vth) {
					sumc+=a[j][i];
				}
				else sumc+=0;
			}
			if(sumc>resc) {
				resc=sumc;
				vtc=tmp;
			}
			sumc=0;
			tmp=0;
		}
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=m;j++) {
				if(j!=vtc) {
					printf("%d ", a[i][j]);
				}
			}
			printf("\n");
		}
		printf("\n");
	}
}

