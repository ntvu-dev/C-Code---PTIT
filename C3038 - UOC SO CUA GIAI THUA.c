#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

void loading() {
	int n, p;
	scanf("%d %d", &n, &p);
	int count=0;
	for(int i=1;i<=n;i++) {
		if(i%p==0) {
			int num=i;
			while(num%p==0) {
				count++;
				num/=p;
			}
		}
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

