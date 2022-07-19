#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int n, i, j, a[55];

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int count=0;
		for(i=0;i<n;i++) {
			scanf("%d", &a[i]);
		}
		bool check=false;
		for(i=1;i<n;i++) {
			for(j=0;j<i;j++) {
				if(a[j]>=a[i]) {
					check=false;
					break;
				}
				else check=true;
			}
			if(check) count++;
		}
		printf("%d\n", count+1);
		count=0;
	}
}

