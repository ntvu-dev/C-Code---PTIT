#include<stdio.h>
#include<math.h>

int main() {
	int n, dem;
	scanf("%d", &n);
	for(int i=2;i<=n;i++) {
		while(n%i==0) {
			dem++;
			n=n/i;
			printf("%d", i);
			if(n>=i) {
				printf("x");
			}
		}
		if(n==1) {
			break;
		}
	}
}

