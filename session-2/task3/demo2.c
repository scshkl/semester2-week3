#include <stdio.h>

int main() {
    float x = 1.0f;
    float y = 0.9f;
    
    // In theory, 1.0 - 0.9 = 0.1
    // 0.1 * 100 should = 10.0
    float result = (x - y) * 100.0f;

    printf("Actual float value: %f\n", result);
    printf("Casted to int:      %d\n", (int)result);

    return 0;
}