#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int n, a[1001];

void importarr() {
	scanf("%d", &n);
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
}

void loading() {
	for(int i=0;i<n;i++) {
		int temp=a[i];
		bool check=false;
		for(int j=i+1;j<=n;j++) {
			if(temp>a[j]) {
				check=true;
			}
			else {
				check=false;
				break;
			}
		}
		if(check==true) {
			printf("%d ", temp);
		}
		check=false;
	}
	printf("\n");
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		importarr();
		loading();
	}
}
