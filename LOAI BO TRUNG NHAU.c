#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>

void loading() {
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i]==a[j]) {
				for(int k=j;k<n-1;k++) {
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	for(int i=0;i<n;i++) {
		printf("%d ", a[i]);
	}
}

int main() {
	loading();
}
