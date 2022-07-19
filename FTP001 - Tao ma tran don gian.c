#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[100][100]={0};
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			if(i<j) {
				a[i][j]=j-i;
			}
			else a[i][j]=0;
		}
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

