#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int n, a[101], b[101];

void importarr() {
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
		b[i]=1;
	}
}

bool snt(int n) {
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) return 0;
	}
	return 1;
}

void tangdan() {
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i]>a[j]) {
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
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
			if(snt(a[i])) printf("%d xuat hien %d lan\n", a[i], count);
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
		tangdan();
		loading();
	}
}

