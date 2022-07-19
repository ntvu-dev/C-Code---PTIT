#include<stdio.h>
#include<math.h>
#include<stdbool.h>

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
	int n;
	scanf("%d", &n);
	for(int i=2;i<=n;i++) {
		if(snt(i)) {
			printf("%d\n", i);
		}
	}
}

int main() {
	loading();
}

