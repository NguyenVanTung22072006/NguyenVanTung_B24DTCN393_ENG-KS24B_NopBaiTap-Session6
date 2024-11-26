#include <stdio.h>

int main() {
    int ngay, thang, nam;

    printf("Nhap nam: ");
    scanf("%d", &nam);

    printf("Nhap thang: ");
    scanf("%d", &thang);

    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            ngay = 31;
            break;
        case 4: case 6: case 9: case 11:
            ngay = 30;
            break;
        case 2:
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
                ngay = 29;
            } else {
                ngay = 28;
            }
            break;
        default:
            ngay = 0;
    }

    printf("Thang %d nam %d co %d ngay\n", thang, nam, ngay);

    return 0;
}
