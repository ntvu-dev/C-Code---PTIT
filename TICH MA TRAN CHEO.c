#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int n, a[101][101], b[101][101], c[101][101];

int main() {
	int t;
	scanf("%d", &t);
	for(int d=1;d<=t;d++) {
		scanf("%d", &n);
		printf("Test %d:\n", d);
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				if(j<=i) a[i][j]=j;
				else a[i][j]=0;
			}
		}
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				b[i][j]=a[j][i];
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
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

