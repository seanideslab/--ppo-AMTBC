#ifndef GAN_PPO_AMBTC_POLICY_H
#define GAN_PPO_AMBTC_POLICY_H
#include "ambtc.h"

typedef struct {
    int action_bits[4];
    float w1[2][32];
    float b1[32];
    float w2[32][4];
    float b2[4];
    int has_weights;
} PPOPolicy;

void policy_init(PPOPolicy *p);
int policy_load_text(PPOPolicy *p, const char *path);
int policy_select_action(const PPOPolicy *p, float qld_norm, float var_norm, float target_bpp, float progress_ratio);
void policy_softmax(const PPOPolicy *p, float qld_norm, float var_norm, float prob[4]);

#endif
