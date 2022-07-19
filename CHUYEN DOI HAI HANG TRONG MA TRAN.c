#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

void nhap(int a[50][50], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
}

void in(int a[50][50], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void hoandoi(int *a,int *b) {
   int temp=*a;
   *a=*b;
   *b=temp;
}

void loading(int a[50][50], int n, int c1, int c2) {
	for (int i = 0; i < n; i++) {
		hoandoi(&a[i][c1], &a[i][c2]);
	}
}

int main() {
	int n, m, a[50][50], c1, c2;
	scanf("%d%d", &n, &m);
	nhap(a, n, m);
	scanf("%d%d", &c1, &c2);
	loading(a, n, c1-1, c2-1);
	in(a, n, m);
	printf("\n"); 
}

