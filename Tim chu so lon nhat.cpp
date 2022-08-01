#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so nguyen duong n =");
		scanf("%d",&n);
	}while(n<=0);

	int i;
	int max=0;
	do{
		i=n%10;
		if(i>max){
			max = i;
		}
	}
	while(n/=10);
	printf("Chu so lon nhat cua so da nhap la %d",max);
}
