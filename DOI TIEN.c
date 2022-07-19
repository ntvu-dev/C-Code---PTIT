#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

int main() {
	int a[]={1,2,5,10,20,50,100,200,500,1000};
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, count=0;
		scanf("%d", &n);
		for(int i=9;i>=0;i--) {
			if(n<=0) break;
			else {
				count+=n/a[i];
				n%=a[i];
			}
		}
		printf("%d\n", count);
	}
}

