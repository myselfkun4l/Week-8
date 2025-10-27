#include <stdio.h>

int main() {
    int num, digit, newNum = 0, place = 1;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;       
        digit = (digit + 1) % 10;  
        newNum = newNum + digit * place;  
        place = place * 10;
        num = num / 10;
    }

    printf("New number: %d\n", newNum);

    return 0;
}
