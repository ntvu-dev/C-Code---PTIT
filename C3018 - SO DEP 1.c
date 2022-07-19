#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

void swap(int *a, int *b) {
	int temp=*a;
	*a=*b;
	*b=temp;
}

bool snt(int n) {
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) return 0;
	}
	return 1;
}

//bool fibo(int n) {
//	long long f[93];
//	f[0]=0;
//	f[1]=1;
//	f[2]=1;
//	int i;
//	for(i=3;i<=93;i++) {
//		f[i]=f[i-1]+f[i-2];
//	}
//	for(i=0;i<=93;i++) {
//		if(n==f[i]) {
//			return 1;
//			break;
//		}
//	}
//	return 0;
//}

bool sumfibo(int n) {
	int sum=0;
	while(n>0) {
		sum+=n%10;
		n/=10;
	}
	if(sum==1 || sum==2 || sum==3 || sum==5 || sum==8 || sum==13 || sum==21) return 1;
	return 0;
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	if(a>=b) swap(&a,&b);
	for(int i=a;i<=b;i++) {
		if(snt(i) && sumfibo(i)) printf("%d ", i);
	}
}

