#ifndef GAN_PPO_AMBTC_CSV_H
#define GAN_PPO_AMBTC_CSV_H
int write_results_header(const char *path);
int append_result_row(const char *path, const char *image_id, double bpp, double psnr, double ssim, int bits, int bit_errors);
#endif
