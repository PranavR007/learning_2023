#include <stdio.h>

void print_bits(unsigned int num) {
    int I;
    int size = sizeof(num) * 8;  

    for (I = size - 1; I >= 0; I--) {
        unsigned int mask = 1 << I;
        unsigned int bit = (num & mask) >> I;
        printf("%u", bit);
    }

    printf("\n");
}

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);
    printf("Binary representation: ");
    print_bits(num);
    return 0;
}