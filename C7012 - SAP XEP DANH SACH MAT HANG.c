#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

struct mathang {
	int stt;
	char name[105];
	char group[105];
	float buy_price, sell_price;
};

typedef struct mathang MH;

void loading(MH a[], int n) {
	int max;
	for(int i=0;i<n;i++) {
		max=i;
		for(int j=i+1;j<n;j++) {
			if((a[j].sell_price-a[j].buy_price) > (a[max].sell_price-a[max].buy_price)) {
				max=j;
			}
		}
		MH temp=a[max];
		a[max]=a[i];
		a[i]=temp;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	MH a[n];
	for(int i=0;i<n;i++) {
		a[i].stt=i+1;
		getchar();
		gets(a[i].name);
		gets(a[i].group);
		scanf("%f%f", &a[i].buy_price, &a[i].sell_price);
	}
	loading(a,n);
	for(int i=0;i<n;i++) {
		printf("%d %s %s %.2f\n", a[i].stt, a[i].name, a[i].group, a[i].sell_price-a[i].buy_price);
	}
}

