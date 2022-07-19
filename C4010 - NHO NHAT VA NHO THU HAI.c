#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int n, i, a[105], min1, min2;

int main() {
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	min1=a[0];
	for(i=1;i<n;i++) {
		if(a[i]<min1) {
			min1=a[i];
		}
	}
	min2=1e6;
	for(i=0;i<n;i++) {
		if(a[i]<min2 && a[i]!=min1) {
			min2=a[i];
		}
	}
	printf("%d %d", min1, min2);
}

