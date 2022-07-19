#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
	int t;
	scanf("%d", &t);
	for(int z=1;z<=t;z++) {
		printf("Test %d:\n", z);
		int n, m, p;
    	scanf("%d%d%d", &n, &m, &p);
	    int a[202], b[101];
	    for(int i=0;i<n;i++) {
		    scanf("%d", &a[i]);
	    }
	    for(int i=0;i<m;i++) {
		    scanf("%d", &b[i]);
	    }
	    for(int i=0;i<p;i++) {
		    printf("%d ", a[i]);
	    }
	    for(int i=p;i<p+m;i++) {
		    printf("%d ", b[i-p]);
	    }
	    for(int i=p;i<n;i++) {
		    printf("%d ", a[i]);
	    }
	    printf("\n");
	}
}

