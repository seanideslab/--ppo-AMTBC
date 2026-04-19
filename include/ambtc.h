#ifndef GAN_PPO_AMBTC_AMBTC_H
#define GAN_PPO_AMBTC_AMBTC_H
#include <stdint.h>
#include "image_io.h"

typedef struct {
    uint8_t H;
    uint8_t L;
    uint16_t BM;
    float qld;
    float var;
} AMBTCBlock;

typedef struct {
    int w, h;
    int block_size;
    int blocks_x, blocks_y, nblocks;
    AMBTCBlock *blocks;
} AMBTCImage;

int ambtc_encode(const GrayImage *img, int block_size, AMBTCImage *out);
int ambtc_decode(const AMBTCImage *amb, GrayImage *out);
void ambtc_free(AMBTCImage *amb);
void ambtc_block_state(const AMBTCBlock *b, float *qld_norm, float *var_norm);

#endif
