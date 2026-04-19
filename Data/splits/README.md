# Split lists

Use `bin/gan_ppo_ambtc_split` to create deterministic train/val/test lists from an input text file containing one image path per line.

Example:

```bash
bin/gan_ppo_ambtc_split examples/all_images.txt data/splits 0.5 0.25 0
```

For paper reproduction, prepare absolute paths to BOSSbase 1.01 and BOWS-2 grayscale PGM images. The paper protocol holds out 5,000 BOSSbase images as the unseen test set.
