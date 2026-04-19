#ifndef GAN_PPO_AMBTC_GENERATOR_H
#define GAN_PPO_AMBTC_GENERATOR_H
#include "ambtc.h"

typedef struct {
    float alpha_pos;
    float beta_neg;
    float threshold;
    float compensation_gain;
} GeneratorLite;

void generator_init(GeneratorLite *g);
float double_tanh(float x, float tau, float alpha, float beta);
void generator_embed_block(const GeneratorLite *g, const AMBTCBlock *cover, AMBTCBlock *stego,
                           const uint8_t *bits, int nbits);

#endif
