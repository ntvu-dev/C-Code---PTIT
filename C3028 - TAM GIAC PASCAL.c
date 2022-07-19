#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int factorial(int n) {
	int f=1;
	for(int i=n;i>=1;i--) {
		f=f*i;
	}
	return f;
}

int pascal(int n, int k) {
	return factorial(n)/(factorial(k)*factorial(n-k));
}

int main() {
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) {
		for(int j=0;j<=i;j++) {
			printf("%d ", pascal(i,j));
		}
		printf("\n");
	}
}

