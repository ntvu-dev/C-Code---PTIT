#include<stdio.h>
#include<math.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, dem=0, tich=1;
		scanf("%d", &n);
		for(int i=2;i<=n;i++) {
			dem=0;
			while(n%i==0) {
				dem++;
				n=n/i;
			}
			if(dem!=0) {
				if(dem>=1) {
					tich=tich*i;
				}
				else tich=i;
			}
		}
		printf("%d\n", tich);
	}
}

