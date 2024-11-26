#include <stdio.h>

int main() {
    float sotienbandau, lai, tongsotien, tienlai;
    int thang;

    printf("Nhap so tien gui ban dau: ");
    scanf("%f", &sotienbandau);
    printf("Nhap lai suat thang: ");
    scanf("%f", &lai);
    printf("Nhap so thang gui: ");
    scanf("%d", &thang);

    tongsotien = sotienbandau;
    for (int i=1; i<=thang; i++) {
        tongsotien *= (1+lai);
    }
    tienlai = tongsotien - sotienbandau;
    printf("So tien lai la: %.2f\n", tienlai);
    printf("So tien nhan duoc sau %d thang la: %.2f\n", thang, tongsotien);

    return 0;
}
