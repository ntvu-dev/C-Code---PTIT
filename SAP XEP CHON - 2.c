#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

void importarr(int a[], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
}

void printfarr(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

void selectsort(int a[], int n) {
	for (int i = 0; i < n-1; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (a[min] > a[j]) {
				min = j;
			}
		}
		int tmp = a[min];
		a[min] = a[i];
		a[i] = tmp;
		printfarr(a, n);
		printf("\n");
	}
}

int main() {
	int n;
	scanf("%d", &n);
	int a[100];
	importarr(a, n);
	selectsort(a, n);
}

