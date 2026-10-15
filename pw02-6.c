#include <stdio.h>
#include <stdint.h>
int main(void) {
    int temp;
    scanf("%d", &temp);
    uint8_t val = (uint8_t)temp;
    uint8_t add = (uint8_t)(val + 10);
    uint8_t mul2 = (uint8_t)(val * 2);
    uint8_t sqr = (uint8_t)(val * val);
    printf("ADD: %u\n", (unsigned int)add);
    printf("MUL2: %u\n", (unsigned int)mul2);
    printf("SQR: %u\n", (unsigned int)sqr);
    return 0;
}