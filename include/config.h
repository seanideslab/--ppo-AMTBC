#ifndef GAN_PPO_AMBTC_CONFIG_H
#define GAN_PPO_AMBTC_CONFIG_H

typedef struct {
    int block_size;
    int image_w;
    int image_h;
    int epochs;
    int batch_size;
    float target_bpp;
    float ppo_clip_eps;
    float gae_lambda;
    float gamma;
    float lr_actor;
    float lr_critic;
    float lr_generator;
    float lr_discriminator;
    int d_updates_per_g;
    int dqn_replay_capacity;
    float dqn_tau;
    float lambda_payload;
    float lambda_distortion;
    float lambda_security;
    float lambda_budget;
} GPConfig;

GPConfig default_config(void);
int load_config_kv(const char *path, GPConfig *cfg);
void print_config(const GPConfig *cfg);

#endif
