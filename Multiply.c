#include<stdio.h>

int main(void) {
    unsigned char num1 = 0x19; // 被乘数（十六进制）
    unsigned char num2 = 0x19; // 乘数（十六进制）
    unsigned short adder = num1 << 8;
    unsigned short product = num2;
    for (int i=0; i < 8; i++) {
        if ((product&0x01) == 0x01) {
            product += adder;
        }
        product >>= 1;
    }
    printf("%u", product); // 以十进制输出
    return 0;
}
