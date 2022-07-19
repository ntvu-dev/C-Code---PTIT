#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int n, m, i, j, k, a[105][105], b[105][105], c[105][105];

int main() {
	int t;
	scanf("%d", &t);
	for(int z=1;z<=t;z++) {
		scanf("%d%d", &n, &m);
		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				scanf("%d", &a[i][j]);
				b[j][i]=a[i][j];
			}
		}
		printf("Test %d:\n", z);
		for(i=0;i<n;i++) {
			for(j=0;j<n;j++) {
				c[i][j]=0;
				for(k=0;k<m;k++) {
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		for(i=0;i<n;i++) {
			for(j=0;j<n;j++) {
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

