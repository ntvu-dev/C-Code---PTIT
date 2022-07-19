#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

void out(int a[], int n) {
	for(int i=0;i<n;i++) {
		printf("%d ", a[i]);
	}
}

void loading(int a[], int n) {
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i]>a[j]) {
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
		printf("Buoc %d: ", i+1);
		out(a, n);
		printf("\n");
	}
}

int main() {
	int n, a[101];
	scanf("%d", &n);
	loading(a,n);
}

