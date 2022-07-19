#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

void swap(char a[], char b[]) {
	char temp[1005];
	strcpy(temp,a);
	strcpy(a,b);
	strcpy(b,temp);
}

int Compare(char a[], char b[]) {
	if(strlen(a) > strlen(b)) {
		return 1;
	}
	if(strlen(a) < strlen(b)) {
		return -1;
	}
	return strcmp(a,b);
}

void loading() {
	char a[1005], b[1005];
	gets(a);
	gets(b);
	if(Compare(a,b)==0) {
		printf("0\n");
		return;
	}
	if(Compare(a,b)<0) {
		swap(a,b);
	}
	int l1=strlen(a)-1, l2=strlen(b)-1;
	char rs[1005];
	int n=l1, remember=0;
	rs[n+1]='\0';
	while(l2>=0) {
		int temp=(a[l1--]-'0')-(b[l2--]-'0')-remember;
		if(temp<0) {
			temp+=10;
			remember=1;
		}
		else {
			remember=0;
		}
		rs[n--] = temp%10 +'0';
	}
	while(l1>=0) {
		int temp=(a[l1--]-'0')-remember;
		if(temp<0) {
			temp+=10;
			remember=1;
		}
		else remember=0;
		rs[n--]=temp%10+'0';
	}
	bool OK=0;
	for(int i=0;i<strlen(a);i++) {
		if(rs[i]!='0' && OK==0) {
			OK=1;
		}
		if(OK) printf("%c", rs[i]);
	}
	printf("\n");
}

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--) {
		loading();
	}
}

