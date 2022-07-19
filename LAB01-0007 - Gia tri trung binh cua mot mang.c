#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	float sum=0;
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	printf("%.3lf\n", sum/n);
}

