#include <stdio.h>

int main(){
	int a, b, c, d, e;
	int sum=0;
	
	printf("Nhap so nguyen thu nhat: \n");
	scanf("%d", &a);
	printf("Nhap so nguyen thu hai: \n");
	scanf("%d", &b);
	printf("Nhap so nguyen thu ba: \n");
	scanf("%d", &c);
	printf("Nhap so nguyen thu tu: \n");
	scanf("%d", &d);
	printf("Nhap so nguyen thu nam: \n");
	scanf("%d", &e);
	
	if(a%2!=0){
		sum+=a;
	}
	if(b%2!=0){
		sum+=b;
	}
	if(c%2!=0){
		sum+=c;
	}
	if(d%2!=0){
		sum+=d;
	}
	if(e%2!=0){
		sum+=e;
	}
	
	printf("Tong cac so le trong cac so da nhap la: %d\n", sum);
	
	return 0;
}
