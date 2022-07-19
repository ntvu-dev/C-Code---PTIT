#include<bits/stdc++.h>
#include<math.h>

int main() {
	int n, P=1, temp;
	scanf("%d", &n);
	while(n!=0) {
		temp=n%10;
		P=P*temp;
		n=n/10;
	}
	printf("%d", P);
}

