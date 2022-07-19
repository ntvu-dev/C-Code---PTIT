#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int i, n, a[105], b[15];

int main() {
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	for(i=0;i<n;i++) {
		if(b[a[i]]!=0) {
			printf("%d %d\n", a[i], b[a[i]]);
			b[a[i]]=0;
		}
	}
}

