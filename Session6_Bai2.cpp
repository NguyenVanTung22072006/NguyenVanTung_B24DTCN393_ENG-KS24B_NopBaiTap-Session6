#include <stdio.h>

int main(){
	int a, b, c, d, e;
	int chan=0, le=0;
	
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
	
	if(a%2==0){
		chan+=1;
	}else{
		le+=1;
	}
	if(b%2==0){
		chan+=1;
	}else{
		le+=1;
	}
	if(c%2==0){
		chan+=1;
	}else{
		le+=1;
	}
	if(d%2==0){
		chan+=1;
	}else{
		le+=1;
	}
	if(e%2==0){
		chan+=1;
	}else{
		le+=1;
	}
	printf("Co %d So Chan va %d So le\n", chan, le);
	
	return 0;
	
}
