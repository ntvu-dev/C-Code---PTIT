#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int n, a[1001];

void import() {
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
}

void loading() {
	bool check=true;
	for(int i=0;i<n;i++) {
		if(a[i]!=a[n-i-1]) check=false;
	}
	if(check) {
		printf("YES\n");
	}
	else printf("NO\n");
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

