#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

void in(int a[], int n) {
	for(int i=0;i<n;i++) {
		printf("%d ", a[i]);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	bool check=false;
	for(int i=0;i<n-1;i++) {
		check=false;
		for(int j=0;j<n-i-1;j++) {
			if(a[j]>a[j+1]) {
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
				check=true;
			}
		}
		if(check==false) break;
		printf("Buoc %d: ", i+1);
		in(a,n);
		printf("\n");
	}
}

