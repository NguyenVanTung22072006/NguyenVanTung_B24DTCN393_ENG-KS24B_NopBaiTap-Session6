#include <stdio.h>

int main(){
	int n, fibon1=0, fibon2=1,fibonNext;
	do{
	printf("Nhap so nguyen duong n: ");
	scanf("%d",&n);
	if(n<1){
		printf("Nhap so nguyen duong\n");
	}
	}while(n<1);
	
	printf("%d so fibonacci dau tien la: ",n);
	 for(int i=1; i<=n; i++){
	 	if(i==1){
	 		printf("%d ",fibon1);
		 }else if(i==2){
		 	printf("%d ",fibon2);
		 }else{
		 	fibonNext = fibon1 + fibon2;
		 	printf("%d ",fibonNext);
		 	fibon1 = fibon2;
		 	fibon2 = fibonNext;
		 }
	 }
} 
