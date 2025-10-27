#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, hcf, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    lcm = (num1 * num2) / hcf;

    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
