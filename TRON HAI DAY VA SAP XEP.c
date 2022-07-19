#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

void importarr(int a[], int n) {
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
}

void printfarr(int a[], int n) {
	for(int i=0;i<n;i++) {
		printf("%d ", a[i]);
	}
}

void quicksort(int a[], int left, int right) {
	int l = left, r = right;
	int key = a[(l + r) / 2];
	while (l <= r) {
		while (a[l] < key) l++;
		while (a[r] > key) r--;
		if (l <= r) {
			int temp = a[l];
			a[l] = a[r];
			a[r] = temp;
			l++; r--;
		}
	}
	if (left < r) quicksort(a, left, r);
	if (l < right) quicksort(a, l, right);
}

int main() {
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++) {
		int n;
		scanf("%d", &n);
		int a[101], b[101], c[202]={};
		importarr(a,n);
		importarr(b,n);
		quicksort(a,0,n-1);
		for(int i=0;i<n-1;i++) {
			for(int j=i+1;j<n;j++) {
				if(b[i]<b[j]) {
					int tmp=b[i];
					b[i]=b[j];
					b[j]=tmp;
				}
			}
		}
		int m=-1;
		for(int i=0;i<2*n;i=i+2) {
			c[i]=a[++m];
		}
		int l=-1;
			for(int i=1;i<2*n;i=i+2) {
			c[i]=b[++l];
		}
		printf("Test %d:\n", i);
		printfarr(c,2*n);
		printf("\n");
	}
}

