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

void chen(int a[], int n) {
	for(int i=0;i<n;i++) {
		int index=i; 
		int value=a[i];
		while(index>0 && a[index-1] > value) {
			a[index]=a[index-1];
			index--;
		}
		a[index]=value;
		printf("Buoc %d: ",i);
		printfarr(a, i+1);
		printf("\n");
	}
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	importarr(a,n);
	chen(a,n);
}

