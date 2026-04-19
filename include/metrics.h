#ifndef GAN_PPO_AMBTC_METRICS_H
#define GAN_PPO_AMBTC_METRICS_H
#include "image_io.h"

double metric_mse(const GrayImage *a, const GrayImage *b);
double metric_psnr(const GrayImage *a, const GrayImage *b);
double metric_ssim_global(const GrayImage *a, const GrayImage *b);
int bit_error_count(const uint8_t *a, const uint8_t *b, int nbits);

#endif
