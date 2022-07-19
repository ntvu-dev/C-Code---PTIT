#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

struct sinhvien {
	int id;
	char name[200];
	char date[100];
	float d1,d2,d3;
};

typedef struct sinhvien SV;

int main() {
	int n;
	scanf("%d", &n);
	SV a[n];
	float max=-1e9;
	for(int i=0;i<n;i++) {
		getchar();
		a[i].id=i+1;
		gets(a[i].name);
		scanf("%s", a[i].date);
		scanf("%f%f%f", &a[i].d1,&a[i].d2,&a[i].d3);
		float sum=a[i].d1+a[i].d2+a[i].d3;
		if(sum>max) max=sum;
	}
	for(int i=0;i<n;i++) {
		if(max==a[i].d1+a[i].d2+a[i].d3) {
			printf("%d %s %s %.1f\n", a[i].id,a[i].name, a[i].date, a[i].d1+a[i].d2+a[i].d3);
		}
	}
}

