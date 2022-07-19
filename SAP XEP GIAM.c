#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>

int comparator (const void * p1, const void * p2) {
    return (*(int*)p1 - *(int*)p2);
}

void loading() {
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), comparator);
	for(int i=n-1;i>=0;i--) {
		printf("%d ", a[i]);
	}
}

int main() {
	loading();
}
