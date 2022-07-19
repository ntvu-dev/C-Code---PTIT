	#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int check(char c[]) {
	int l=strlen(c);
	if(c[0]=='0') return 2;
	bool check0=false,check1=false,check2=false,check3=false,check4=false,check5=false,check6=false,check7=false,check8=false,check9=false;
	for(int i=0;i<l;i++) {
		if(c[i]>='0' && c[i]<='9') {
			switch(c[i]) {
				case '0':
					check0=true;
					break;
				case '1':
					check1=true;
					break;
				case '2':
					check2=true;
					break;
				case '3':
					check3=true;
					break;
				case '4':
					check4=true;
					break;
				case '5':
					check5=true;
					break;
				case '6':
					check6=true;
					break; 
				case '7':
					check7=true;
					break;
				case '8':
					check8=true;
					break;
				case '9':
					check9=true;
					break;
				}
			}
			else {
				return 2;
				break;
			}
		}
	if(check1 && check2 && check3 && check4 && check5 && check6 && check7 && check8 && check9) return 1;
	else return 0; 
}


int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--) {
		char c[1001];
		gets(c);
		int temp=check(c);
		if(temp==0) printf("NO\n");
		else if(temp==1) printf("YES\n");
		else printf("INVALID\n");
	}
}

