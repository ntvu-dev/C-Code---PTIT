#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
	int n, m, p;
	scanf("%d%d", &n, &m);
	int a[202], b[101];
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	for(int i=0;i<m;i++) {
		scanf("%d", &b[i]);
	}
	scanf("%d", &p);
	for(int i=0;i<p;i++) {
		printf("%d ", a[i]);
	}
	for(int i=p;i<p+m;i++) {
		printf("%d ", b[i-p]);
	}
	for(int i=p;i<n;i++) {
		printf("%d ", a[i]);
	}
}

