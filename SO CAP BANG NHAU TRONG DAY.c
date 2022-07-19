#include<stdio.h>
#include<math.h>

void loading() {
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	int count=0;
	for(int i=0;i<n-1;i++) {
		//for(int j=i+1;j<n;j++) {
			if(a[i]==a[i+1]) {
				count++;
			}
		//}
	}
	printf("%d\n", count);
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		loading();
	}
}

