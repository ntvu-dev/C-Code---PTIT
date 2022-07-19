#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

bool checktn(char c[]) {
	int l=0, r=strlen(c)-1;
	while(l<r) {
		if(c[l]!=c[r]) {
			return 0;
		}
		++l;
		--r;
	}
	return 1;
}

struct word {
	char tu[100];
	int count;
};

typedef struct word word;

int find(word a[], int n, char temp[]) {
	for(int i=0;i<n;i++) {
		if(strcmp(temp,a[i].tu)==0) {
			return i;
		}
	}
	return -1;
}

int main() {
	word a[1001];
	int n=0;
	char temp[100];
	while((scanf("%s", temp))!=-1) {
		if(checktn(temp)) {
			int i=find(a, n, temp);
			if(i==-1) {
				strcpy(a[n].tu, temp);
				a[n].count=1;
				++n;
			}
			else {
				a[i].count+=1;
			}
		}
	}
	int max_len=0;
	for(int i=0;i<n;i++) {
		if(max_len<strlen(a[i].tu)) max_len=strlen(a[i].tu);
	}
	for(int i=0;i<n;i++) {
		if(strlen(a[i].tu)==max_len) {
			printf("%s %d\n", a[i].tu, a[i].count);
		}
	}
}

