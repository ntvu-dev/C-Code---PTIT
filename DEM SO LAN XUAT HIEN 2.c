#include<stdio.h>
#include<math.h>

int n, a[101], b[101];

void importarr() {
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++) {
		b[i]=1;
	}
}

void loading() {
	for(int i=0;i<n;i++) {
		int count=1;
		if(b[i]) {
			b[i]=0;
			for(int j=i+1;j<n;j++) {
				if(a[i]==a[j]) {
					count++;
					b[j]=0;
				}
			}
			printf("%d xuat hien %d lan\n", a[i], count);
		}
	}
	printf("\n");
}

int main() {
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++) {
		scanf("%d", &n);
		importarr();
		printf("Test %d: \n", i);
		loading();
	}
}

