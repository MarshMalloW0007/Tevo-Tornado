    #define CUSTOM_BOOTSCREEN_TIMEOUT      1000
	#define CUSTOM_BOOTSCREEN_BMPWIDTH      128
    #define CUSTOM_BOOTSCREEN_BMPHEIGHT      64
    
    const unsigned char custom_start_bmp[1024] PROGMEM = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 255, 255, 255, 255, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 224, 0, 255, 255, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 240, 0, 0, 0, 63, 255, 192, 0, 0, 0, 0, 0, 0, 0, 0, 7, 128, 0, 0, 0, 0, 255, 224, 0, 0, 0, 0, 0, 0, 0, 0, 14, 7, 252, 0, 0, 0, 15, 240, 0, 0, 0, 0, 0, 0, 0, 0, 12, 255, 0, 0, 0, 0, 1, 248, 0, 0, 0, 0, 0, 0, 0, 0, 15, 224, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 15, 192, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 7, 192, 0, 0, 0, 1, 224, 112, 0, 0, 0, 0, 0, 0, 0, 0, 1, 224, 0, 0, 0, 0, 124, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 127, 240, 0, 0, 0, 0, 0, 0, 0, 0, 1, 15, 192, 0, 0, 1, 255, 224, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 255, 128, 0, 63, 227, 224, 0, 0, 0, 0, 0, 0, 0, 0, 1, 128, 7, 255, 255, 252, 15, 192, 0, 0, 0, 0, 0, 0, 0, 0, 1, 192, 0, 0, 0, 0, 63, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 1, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 47, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 255, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 128, 0, 15, 254, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 62, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 192, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 15, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 16, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 7, 0, 3, 192, 0, 0, 0, 0, 0, 0, 1, 254, 0, 0, 0, 0, 3, 128, 15, 128, 0, 0, 0, 0, 0, 0, 1, 252, 0, 0, 0, 0, 0, 192, 127, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 195, 0, 0, 8, 0, 3, 0, 15, 128, 124, 0, 0, 0, 0, 0, 0, 7, 1, 253, 255, 239, 231, 131, 63, 134, 124, 63, 128, 0, 0, 0, 0, 14, 7, 255, 255, 247, 239, 143, 255, 31, 252, 127, 192, 0, 0, 0, 0, 60, 31, 255, 253, 251, 255, 223, 255, 63, 252, 255, 224, 0, 0, 0, 0, 118, 31, 254, 123, 251, 255, 223, 255, 127, 253, 255, 224, 0, 0, 0, 0, 6, 30, 6, 123, 251, 255, 255, 255, 127, 255, 224, 224, 0, 0, 0, 0, 28, 28, 6, 123, 243, 247, 184, 30, 112, 123, 128, 224, 0, 0, 0, 1, 248, 24, 30, 124, 3, 231, 190, 254, 127, 251, 129, 192, 0, 0, 0, 0, 240, 31, 254, 126, 1, 231, 191, 255, 255, 255, 255, 192, 0, 0, 0, 3, 248, 15, 252, 255, 135, 231, 191, 255, 255, 255, 255, 192, 0, 0, 0, 3, 240, 7, 249, 255, 135, 231, 159, 255, 191, 126, 255, 128, 0, 0, 0, 1, 240, 3, 241, 224, 0, 39, 255, 16, 0, 64, 63, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

