#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#define max(a,b) (((a)>(b))?(a):(b))

int i, n;

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		//int end=-1e9;
		int a[105]={}, b[30005]={};
		scanf("%d", &n);
		int maxb=-1e9;
		for(i=0;i<n;i++) {
			scanf("%d", &a[i]);
			//end=max(end,a[i]);
			b[a[i]]++;
			maxb=max(maxb, b[a[i]]);
		}
		for(i=0;i<n;i++) {
			if(b[a[i]]==maxb) {
				b[a[i]]=0;
				printf("%d ",a[i]);
			}
		}
	printf("\n");
	maxb=-1e9;
	}
}

