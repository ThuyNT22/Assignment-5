#include <stdio.h>
int main(){
	int a;
	int b;
	do{
		printf("Nhap so nguyen duong a =");
		scanf("%d",&a);
	}while(a<=0);
	do{
		printf("Nhap so nguyen duong b =");
		scanf("%d",&b);
	}while(b<=0);

	for(int i=a;i<=b;i--){
		if(a%i==0 && b%i==0){
			printf("Uoc chung lon nhat cua %d va % d la %d \n",a,b,i);
		break;
		}
	}

	for(int j=a;j<a*b;j++){
		if(j%a==0 && j%b==0){
			printf("Boi chung nho nhat cua %d va % d la %d \n",a,b,j);
		break;
		}
	}

}