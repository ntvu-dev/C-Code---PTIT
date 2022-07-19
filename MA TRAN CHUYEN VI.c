#include<stdio.h>
#include<math.h>

void nhap(int a[20][20], int m, int n) {
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) 
			scanf("%d", &a[i][j]);
		}
	}
void in(int a[20][20], int m, int n) {
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
void chuyenvi(int a[20][20], int m, int n, int b[20][20]) {
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			b[i][j] = a[j][i];
			}
		}
	}
int main() {
	int m, n, a[20][20];
	int b[20][20];
	scanf("%d%d", &m, &n);
	nhap(a,m,n);
	chuyenvi(a,m,n,b);
	in(b,n,m);
}
