#ifndef GAN_PPO_AMBTC_IMAGE_IO_H
#define GAN_PPO_AMBTC_IMAGE_IO_H
#include <stdint.h>

typedef struct {
    int w, h;
    uint8_t *data;
} GrayImage;

int pgm_read(const char *path, GrayImage *img);
int pgm_write(const char *path, const GrayImage *img);
void image_free(GrayImage *img);

#endif
