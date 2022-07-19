#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>

int main() {
	int n;
	scanf("%d", &n);
	int value=0;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			for(int j=1;j<=i;j++){
				value++;
			}
			int tmp=value;
			for(int j=1;j<=i;j++){
				printf("%d ",--tmp+1);
			}
		}
		else{
			for(int j=1;j<=i;j++){
				printf("%d ",++value);
			}
		}
		printf("\n");
	}	
	return 0;
}
