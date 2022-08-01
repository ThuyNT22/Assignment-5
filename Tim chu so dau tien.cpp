#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so nguyen duong n =");
		scanf("%d",&n);
	}while(n<=0);

	int so=n;
	int sodau;
	do{
		sodau=so%10;
	}
	while(so/=10);
	printf("Thu so dau tien cua %d la %d",n,sodau);
}
