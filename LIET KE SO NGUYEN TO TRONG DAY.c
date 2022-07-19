#include<stdio.h>
#include<math.h>

bool snt(int n) {
	if(n<2) {
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) {
			return 0;
		}
	}
	return 1;
}

void loading() {
	int n,count=0;
	scanf("%d", &n);
	int a[1001];
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
		if(snt(a[i])) count++;
	}
	printf("%d ", count);
	for(int i=0;i<n;i++) {
		if(snt(a[i])) {
			printf("%d ", a[i]);
		}
	}
	printf("\n");
}

int main() {
	loading();
}
