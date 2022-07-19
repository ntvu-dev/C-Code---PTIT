#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

bool snt(int n) {
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) return 0;
	}
	return 1;
}

bool check(int n) {
	int temp;
	while(n>0) {
		temp=n%10;
		if(temp==2 || temp==3 || temp==5 || temp==7) {
			n/=10;
			continue;
		}
		else {
			return 0;
			break;
		}
	}
	return 1;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int a, b, count=0;
		scanf("%d %d", &a, &b);
		for(int i=a;i<=b;i++) {
			if(snt(i) && check(i)) {
				count++;
			}
		}
		printf("%d\n", count);
	}
}

