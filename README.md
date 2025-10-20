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

## What it looks like 
-INPUT IMAGE
<img width="2560" height="1440" alt="Screenshot (4)" src="https://github.com/user-attachments/assets/948ffc9b-2f47-4078-9249-f5b0b0425ced" />


-OUTPUT IMAGE

<img width="653" height="376" alt="Screenshot 2025-10-15 234053" src="https://github.com/user-attachments/assets/3068895b-9066-4798-87c0-9c51d022342f" />


## How to Build

```bash
gcc main.c -o main.exe -mconsole -lm
