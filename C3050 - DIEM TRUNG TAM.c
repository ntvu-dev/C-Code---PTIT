#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
	int n, dp[100005]={0};
	scanf("%d", &n);
	for(int i=1;i<n;i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		dp[a]++;
		dp[b]++;
	}
	for(int i=1;i<=n;i++) {
		if(dp[i]!=1 && dp[i]!=n-1) {
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");
}

