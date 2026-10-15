#include <stdio.h>
#include <stdint.h>
int main(void) {
    int id;
    unsigned int raw_status;
    float voltage;
    scanf("%x %o %f", &id, &raw_status, &voltage);
    uint8_t status = (uint8_t)raw_status;
    uint16_t checksum = (uint16_t)(id + status);
    printf("PACKET_ID: %d\n", id);
    printf("STATUS_CODE: %u\n", status);
    printf("STATUS_CHAR: %c\n", (char)status);
    printf("VOLTAGE: %.2f\n", voltage);
    printf("CHECKSUM: %u\n", checksum);
    return 0;
}