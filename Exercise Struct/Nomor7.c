#include <stdio.h>

union UIntHexConverter {
    unsigned int value;  
    struct {
        unsigned char byte0 : 8;
        unsigned char byte1 : 8;
        unsigned char byte2 : 8;
        unsigned char byte3 : 8;
    } bytes;
};

void printHexUsingBitField(union UIntHexConverter u) {
    printf("Hexadecimal representation: 0x%02X%02X%02X%02X\n",
            u.bytes.byte3,  
            u.bytes.byte2,
            u.bytes.byte1,
            u.bytes.byte0); 
}

int main() {
    union UIntHexConverter converter;

    printf("Enter a 4-byte unsigned integer: ");
    scanf("%u", &converter.value);

    printHexUsingBitField(converter);

    return 0;
}
