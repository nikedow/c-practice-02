#include <stdio.h>
int main(void) {
    int id;
    int version;
    int status;
    int sum;
    scanf("%d %x %o", &id, &version, &status);
    sum = id + version + status;
    printf("UNIT_ID: %d\n", id);
    printf("UNIT_VERSION: %d\n", version);
    printf("UNIT_STATUS: %d\n", status);
    printf("SUM: %d\n", sum);
}