#include <stdio.h>
#include <stdint.h>
#include "prime.h"

int main(int argc, char ** argv){
	uint8_t prime[] = {
            0xdf, 0xd1, 0x18, 0x63, 0x6f, 0x2c, 0x1b, 0x14, 0x3b, 0x95, 0x3d, 0x56, 0xdd, 0x5b, 0x6f, 0x01,
            0x6e, 0xf9, 0x4c, 0x2b, 0xcb, 0xeb, 0xdd, 0x89, 0xb0, 0x8e, 0xdd, 0xf3, 0xf0, 0x0f, 0xf7, 0x71,
            0x75, 0xd0, 0x7e, 0xb0, 0xbe, 0x6b, 0x51, 0x3a, 0x8c, 0xcf, 0x9b, 0x81, 0xfa, 0x34, 0x4f, 0xfc,
            0x98, 0xd6, 0x65, 0xb1, 0x2f, 0x82, 0x55, 0xa8, 0xd1, 0xb5, 0x1a, 0xaf, 0x7b, 0xda, 0x6f, 0x02,
            0x43, 0x14, 0x7e, 0x69, 0x52, 0x11, 0x9e, 0xa9, 0x95, 0x44, 0xb1, 0x19, 0x7f, 0x7b, 0x7c, 0x67,
            0x30, 0x11, 0x67, 0x88, 0x9d, 0xb1, 0xb5, 0x6e, 0x6a, 0x69, 0x17, 0x64, 0x57, 0xdc, 0x5e, 0xfd,
            0x33, 0xae, 0x84, 0xdc, 0x2a, 0x73, 0x54, 0x8d, 0xbe, 0x04, 0xc7, 0x6f, 0x6e, 0x7f, 0x31, 0xf1,
            0x04, 0xb3, 0x6b, 0xf7, 0x9f, 0x62, 0x15, 0xb0, 0x75, 0x12, 0xa8, 0x4f, 0x02, 0x4a, 0xcb, 0xd7};
    int i;

    printf("Usage: %s nbits\n", argv[0]);
    int nbits = 512;
    if (argc > 1)
    {
        nbits = max(8, atoi(argv[1]));
        nbits = min(1024, nbits);
    }

    generate_prime_number(prime, 1024);
    for(i = 0; i < 128; i++){
        printf("%.2x", prime[i]);
    }
    printf("\n");

	return 1;
}