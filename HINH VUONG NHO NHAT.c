#include<stdio.h>
#include<math.h>



int main() {
	int x1, y1, x2, y2. x3. y3, x4, y4;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	scanf("%d%d%d%d", &x3, &y3, &x4, &y4);
	int max_x, max_y, min_x, min_y;
	if(x2>=x4) {
		max_x=x2;
	}
	else max_x=x4;
	if(x1<=x3) {
		min_x=x1;
	}
	else min_x=x3;
	if(y2>=y4) {
		max_y=y2;
	}
	else max_y=y4;
	if(y1<=y3) {
		min_y=y1;
	}
	else min_y=y3;
	int dai=max_x-min_x;
	int rong=max_y-min_y;
	if(dai>=rong) {
		printf("%d", dai*dai);
	}
	else printf("%d", rong*rong);
}

