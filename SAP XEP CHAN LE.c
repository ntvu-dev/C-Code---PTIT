#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int n, a[101], c[101], l[101];

void sortarr(int a[], int n) {
	for(int i=1;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i]>a[j]) {
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}	
}

void exportarr(int a[], int n) {
	for(int i=1;i<n;i++) {
		printf("%d ", a[i]);
	}
}

void loading() {
	int dc=0, dl=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++) {
	    if(a[i]%2==0) {
		    c[++dc]=a[i];
	    }
	    if(a[i]%2!=0) {
	    	l[++dl]=a[i];
		}
	}
	sortarr(c,dc+1);
	sortarr(l,dl+1);
	exportarr(c,dc+1);
	exportarr(l,dl+1);
	printf("\n");
}

int main() {
	loading();
}

