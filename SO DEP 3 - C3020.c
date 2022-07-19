#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	if(a>b) {
		int tmp=a;
		a=b;
		b=tmp;
	}
	int count=0;
	bool check6=false;
	for(int i=a; i<=b; i++) {
		int j=i;
		int sum=0, tcs=0, tmp;	
		while(j>0) {
			tmp=j%10;
			if(tmp==6) {
				check6=true;
			}
			tcs+=tmp;
			sum=sum*10+tmp;
			j/=10;
		}
		if(check6 && (sum==i) && (tcs%10==8)) printf("%d ", i);
		sum=0, tcs=0, check6=false;
	}
}

