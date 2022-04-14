#include<stdio.h>

int main(void) {
    unsigned char num = 0x19; //��ƽ�������ҵ�ѧ��
    unsigned short adder = num << 8;
    unsigned short product = num;
    for (int i=0; i < 8; i++) {
        if ((product&0x01) == 0x01) {
            product += adder;
        }
        product >>= 1;
    }
    printf("%u", product);
    return 0;
}
