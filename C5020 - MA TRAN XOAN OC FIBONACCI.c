#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int n, a[100][100];

long long fibo(int n) {
	long long f[95];
	int i;
	f[0]=0;
	f[1]=1;
	f[2]=1;
	for(int i=3;i<=n;i++) {
		f[i]=f[i-1]+f[i-2];
	}
	return f[n];
}

int matrix[100005];

int main() {
	scanf("%d", &n);
	int count=-1;
	for(int i=0;i<=92;i++) {
		matrix[++count]=fibo(i);
	}
	int cot=n-1, hang=n-1, d=0, i, j;
	count=0;
	while(d<=(n/2)) {
		for(i=d;i<=cot;i++) {
			a[d][i]=matrix[count++];
		}
		for(i=d+1;i<=hang;i++) {
			a[i][hang]=matrix[count++];
		}
		for(i=cot-1;i>=d;i--) {
			a[cot][i]=matrix[count++];
		}
		for(i=hang-1;i>d;i--) {
			a[i][d]=matrix[count++];
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
}

