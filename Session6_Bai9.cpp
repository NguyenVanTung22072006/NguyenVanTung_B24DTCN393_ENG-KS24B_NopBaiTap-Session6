#include <stdio.h>

int main() {
    int num, digit_1, digit_2, digit_3, sum;
    
    printf("So Armstrong co 3 chu so la: ");
    for (num = 100; num < 1000; num++) {
        digit_1 = num / 100;
        digit_2 = (num / 10) % 10;
        digit_3 = num % 10;
        
        sum = digit_1 * digit_1 * digit_1 + digit_2 * digit_2 * digit_2 + digit_3 * digit_3 * digit_3;
        
        if (num == sum) {
            printf("%d ", num);
        }
    }
    
    return 0;
}
