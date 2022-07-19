#include<stdio.h>
#include<math.h>
#include<stdbool.h>

using namespace std;

bool sntcheck(int n) {
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) {
			return false;
		}
	}
	return true;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, a[1001];
		scanf("%d", &n);
		for(int i=0;i<n;i++) {
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;i++) {
			if(sntcheck(a[i])) {
				printf("%d ", a[i]);
			}
		}
		printf("\n");
	}
}

