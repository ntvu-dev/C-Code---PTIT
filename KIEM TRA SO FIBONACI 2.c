#include<stdio.h>
#include<math.h>
#include<stdbool.h>

long long f[100];

void loading() {
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=92;i++) {
		f[i]=f[i-1]+f[i-2];
	}
}

int main() {
	int t;
	scanf("%d", &t);
	loading();
	while(t--) {
		long long n;
		scanf("%lld", &n);
		bool check=false;
		for(int i=0;i<=92;i++) {
			if(n==f[i]) {
				check=true;
				break;
			}
		}
		if(check) printf("YES\n");
		else printf("NO\n");
		//check=false;
	}
}

