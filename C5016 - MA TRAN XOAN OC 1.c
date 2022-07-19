#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
	int n, a[101][101];
	scanf("%d", &n);
	int value=1, cot=n-1, hang=n-1, d=0;
	while(d<=n/2) {
		for(int i=d;i<=cot;i++) {
			a[d][i]=value++;
		}
		for(int i=d+1;i<=hang;i++) {
			a[i][cot]=value++;
		}
		for(int i=cot-1;i>=d;i--) {
			a[hang][i]=value++;
		}
		for(int i=hang-1;i>d;i--) {
			a[i][d]=value++;
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

