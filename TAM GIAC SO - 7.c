#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>

int main() {
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++) {
		int temp=i;
		printf("%d ", i);
		int count=n-1;
		for(int j=2;j<=i;j++) {
		    temp+=count;
			printf("%d ", temp);
			count--;	
		}
		printf("\n");
	}
}
