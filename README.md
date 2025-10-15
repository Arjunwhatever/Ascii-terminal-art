# ASCII Art Image Viewer (C)

🖼️CLI tool that converts images (PNG, JPG) into colorized ASCII art in the terminal, written in C.

## Features
- Loads PNG or JPG images using `stb_image.h`
- Converts image to ASCII art based on brightness
- Color output using ANSI escape codes
- Runs in any terminal that supports True Color

## Requirements
- GCC or any C compiler
- Terminal with ANSI/True Color support

## How to Build

```bash
gcc main.c -o main.exe -mconsole -lm
