#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

bool tn(int n) {
	int temp, sum=0;
	temp=n;
	bool c9=true;
	while(n>0) {
		int tmp=n%10;
		if(tmp==9) c9=false;
		sum=sum*10+tmp;
		n/=10;
	}
	if(sum==temp && c9) {
		return true;
	}
	else return false;
}

int main() {
	int n;
	scanf("%d", &n);
	int count=0;
	for(int i=2;i<=n;i++) {
		if(tn(i)) {
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d\n", count);
}


