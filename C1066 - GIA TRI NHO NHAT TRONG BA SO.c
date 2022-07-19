#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

//#define min(a,b) (((a)<(b))?(a):(b))

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a<=b && b<=c) printf("%d", a);
	else if(b<=a && a<=c) printf("%d", b);
	else printf("%d", c);
}

