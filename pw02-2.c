#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    bool ready = a;
    bool fault = b;
    printf("MODULE_READY: %d\n", ready);
    printf("FAULT_STATE: %d\n", fault);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", ready + fault);
    return 0;
}