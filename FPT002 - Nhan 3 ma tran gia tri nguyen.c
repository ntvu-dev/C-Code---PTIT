#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
	int m, n, p, q;
	scanf("%d%d%d%d", &m, &n, &p, &q);
	int A[105][105], B[105][105], C[105][105], dp1[105][105], dp2[105][105];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < q; j++) {
			scanf("%d", &C[i][j]);
		}
	}
	// A m n * B n p = dp1 m p;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++) {
			int tmp = 0;
			for (int k = 0; k < n; k++) {
				tmp += A[i][k] * B[k][j];
			}
			dp1[i][j] = tmp;
		}
	}
	// dp m p * C p q = dp2 m q

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < q; j++) {
			int temp = 0;
			for (int k = 0; k < p; k++) {
				temp += dp1[i][k] * C[k][j];
			}
			printf("%d ", temp);
		}
		printf("\n");
	}
}

