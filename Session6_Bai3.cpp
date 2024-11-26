#include <stdio.h>
int main(){
	int a;
	
	printf("Vui Long Nhap Mat Khau: ");
	scanf("%d", &a);
	
	if(a==123){
		printf("Mat Khau chinh xac\n");
	}else{
		printf("Sai Mat Khau");
	}
	return 0;
}
