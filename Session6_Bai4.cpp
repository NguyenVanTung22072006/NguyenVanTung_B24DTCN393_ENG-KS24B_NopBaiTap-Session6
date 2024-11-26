#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c, delta;
    float x1, x2;

    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);

    if (a==0){
        printf("Khong phai phuong trinh bac 2\n");
    }else {
        delta = b*b-4*(a*c);
        if (delta>0){
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            printf("Phuong trinh co 2 nghiem phan biet: \n");
			printf("x1 = %.2f\n", x1);
			printf("x2 = %.2f", x2);
        }else if (delta==0) {
            x1 = -b/(2*a);
            printf("phuong trinh co nghiem kep:\n");
			printf("x1 = %.2f",x1);
			
        }else {
            printf("Phuong trinh vo nghiem\n");
        }
    }

    return 0;
}
