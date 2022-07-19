#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int i, j, n, a[105][105], b[105][105], c[105][105];

int main() {
	int t;
	scanf("%d", &t);
	for(int z=1;z<=t;z++) {
		printf("Test %d:\n", z);
		scanf("%d", &n);
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				if(j<=i) a[i][j]=j;
				else a[i][j]=0;
			}
		}
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				b[j][i]=a[i][j];
			}
		}
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				c[i][j]=0;
				for(int k=1;k<=n;k++) {
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		for(i=1;i<=n;i++) {
			for(j=1;j<=n;j++) {
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}

