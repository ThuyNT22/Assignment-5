#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so nguyen duong n =");
		scanf("%d",&n);
	}while(n<=0);

	int so=n;
	int S=0;
	while(so>0){
	S = S+so%10;
	so=so/10;
	}
	printf("Tong cac chu so cua so da nhap la %d",S);
}
