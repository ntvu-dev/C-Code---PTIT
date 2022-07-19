#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

void loading() {
	int n, k;
	scanf("%d %d", &n, &k);
	int count=0;
	for(int i=1;i<=n;i++) {
		if(i%2==0) {
			int j=i;
			while(j%2==0) {
				count++;
				j/=2;
			}
		}
	}
	if(count>=k) {
		printf("Yes\n");
	}
	else printf("No\n");
}

int main() {
	loading();
}

