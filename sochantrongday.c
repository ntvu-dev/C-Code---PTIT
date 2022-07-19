#include<stdio.h>
#include<math.h>
#include<stdbool.h>

using namespace std;

int n, a[1001];

void import() {
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
}

void loading() {
	for(int i=0;i<n;i++) {
		if(a[i]%2==0) {
			printf("%d ", a[i]);
		}
	}
	printf("\n");
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		import();
		loading();
	}
}

