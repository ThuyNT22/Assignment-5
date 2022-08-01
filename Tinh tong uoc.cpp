#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so nguyen duong n =");
		scanf("%d",&n);
	}while(n<=0);
	printf("Cac uoc so cua %d la\n",n);
	int i=1;
	int S=0;
	while(i<=n){
	if(n%i==0){
		printf("%d\n",i);
		S = S + i;
	}
	i++;
	}
	printf("Tong cac uoc so cua %d la %d",n,S);
}