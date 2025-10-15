#define STB_IMAGE_IMPLEMENTATION
#include <stdio.h>
#include "stb_image.h"

const char *ASCII_CHARS = "@%#*+=-:. ";

char brightness_to_ascii(unsigned char r, unsigned char g, unsigned char b) {
    float brightness = 0.2126*r + 0.7152*g + 0.0722*b;
    int index = (brightness / 255.0) * (strlen(ASCII_CHARS) - 1);
    return ASCII_CHARS[index];
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <image_file>\n", argv[0]);
        return 1;
    }

    int width, height, channels;
    unsigned char *img = stbi_load(argv[1], &width, &height, &channels, 3);
    if (!img) {
        fprintf(stderr, "Failed to load image: %s\n", argv[1]);
        return 1;
    }

    int scale = 4; //FEEL FREE TO ADJUST ACCORDING THE SIZE OF THE IMAGE YOU WANT
    for (int y = 0; y < height; y += scale) {
        for (int x = 0; x < width; x += scale) {
            int idx = (y * width + x) * 3;
            unsigned char r = img[idx];
            unsigned char g = img[idx+1];
            unsigned char b = img[idx+2];
            char c = brightness_to_ascii(r, g, b);
            printf("\x1b[38;2;%d;%d;%dm%c\x1b[0m", r, g, b, c);
        }
        printf("\n");
    }

    stbi_image_free(img);
    return 0;
}
