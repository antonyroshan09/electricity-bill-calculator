#include <stdio.h>

int main() {
    float units, bill;

    printf("Enter units consumed: ");
    scanf("%f", &units);

    if (units <= 100)
        bill = units * 2;
    else
        bill = (100 * 2) + ((units - 100) * 3);

    printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}