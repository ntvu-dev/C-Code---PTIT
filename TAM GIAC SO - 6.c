#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>

int main() {
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++) {
		for(int j=n;j>i;j--) {
			printf("~");
		}
		for(int j=1;j<=2*i-1;j+=2) {
			printf("%d", j+1);
		}
		for(int j=2*i-3;j>=1;j-=2) {
			printf("%d", j+1);
		}
		printf("\n");
	}
}
