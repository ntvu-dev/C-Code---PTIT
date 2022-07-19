#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main() {
	int n,t;
	scanf("%d",&t);
	while(t--) {
	    scanf("%d", &n);
	    int count=0;
		int k=sqrt(n);
		for (int i=1;i<=k;i++) {
			if (n%i==0 && i%2==0){
			count++;
		    }
		    if ((n/i)%2==0 && n%i==0){
			    count++;
		    }
		}
		if(k*k==n && n%2==0){
			printf("%d\n",count-1);
		}
		else printf("%d\n",count);
	}
}
