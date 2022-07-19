#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int i, n, a[105], b[1005];

int main() {
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	int count=0;
	for(i=0;i<n;i++) {
		if(b[a[i]]==1) {
			count++;
		}
	}
	printf("%d\n", count);
	for(i=0;i<n;i++) {
		if(b[a[i]]==1) printf("%d ", a[i]);
	}
}

