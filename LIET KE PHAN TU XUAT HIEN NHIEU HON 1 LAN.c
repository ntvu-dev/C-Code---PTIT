#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int n, a[101], b[101], dem=0;

void importarr() {
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
}

void loading() {
	for(int i=0;i<100;i++) {
		if(b[i]>1) dem++;
	}
	printf("%d\n", dem);
	for(int i=0;i<n;i++) {
		if(b[a[i]]>1) {
			printf("%d ", a[i]);
			b[a[i]]=0;
		}
	}
	printf("\n");
}

int main() {
	scanf("%d", &n);
	importarr();
	loading();
}

