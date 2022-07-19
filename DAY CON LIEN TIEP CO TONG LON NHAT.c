#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

#define MAX(a,b) (((a) > (b)) ? (a):(b))

void importarr(long long a[], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}
}

long long max(long long num1, long long num2) {
	return (num1 > num2) ? num1 : num2;
}

void loading(long long a[], int n) {
	long long res = -1e9 + 7, tmp = 0;
	for (int i = 0; i < n; i++) {
		tmp = 0;
		for (int j = i; j < n; j++) {
			tmp += a[j];
			if (tmp < 0) break;
			else {
				res = max(res,tmp);
			}
		}
	}
	printf("%lld\n", res);
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		long long a[100005];
		importarr(a, n);
		loading(a, n);
	}
}

