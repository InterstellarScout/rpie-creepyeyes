/***************************************************
//Web: http://www.buydisplay.com
EastRising Technology Co.,LTD
Examples for ER-OLEDM0.95-2C
Display is Hardward SPI 4-Wire SPI Interface 
Tested and worked with: 
Works with Raspberry pi
****************************************************/

//Play a gif on the 128x128 OLED Screen on the raspberry pi.

//How to convert images
//https://superuser.com/questions/737067/convert-file-to-24bit-bitmap
//convert -verbose  -depth 24 -type truecolor -units PixelsPerInch -density 72 -compress None -depth 24 infile/location /home/pi/ER-OLEDM015-1C/CreepyEye3.bmp
#include <bcm2835.h>
#include <stdio.h>
#include <time.h>
#include "ssd1351.h"

char value[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int main(int argc, char **argv)
{
    //time_t now;
    //struct tm *timenow;
    FILE *pFile ;
    //1 pixel of 888 bitmap = 3 bytes 
	size_t pixelSize = 3;
    unsigned char bmpBuffer[OLED_WIDTH * OLED_HEIGHT * 3];

    if(!bcm2835_init())
    {
        return -1;
    }

    SSD1351_begin();
    SSD1351_mono_bitmap(0, 0, mono_bmp, 128, 128, RED);
    SSD1351_display();
    bcm2835_delay(2000);

    int speed = 50;
	int standardSize = 128;

//#################################################################//
//#################################################################//

	while(1) {
pFile = fopen("right_images/CreepyEyes0.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes1.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes2.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes3.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes4.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes5.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes6.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes7.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes8.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes9.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes10.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes11.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes12.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes13.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes14.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes15.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes16.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes17.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes18.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes19.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes20.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes21.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes22.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes23.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes24.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes25.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes26.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes27.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes28.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes29.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes30.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes31.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes32.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes33.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes34.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes35.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes36.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes37.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes38.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes39.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes40.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes41.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes42.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes43.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes44.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes45.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes46.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes47.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes48.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes49.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes50.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes51.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes52.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes53.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes54.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes55.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes56.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes57.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes58.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes59.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes60.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes61.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes62.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes63.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes64.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes65.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes66.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes67.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes68.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes69.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes70.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes71.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes72.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes73.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes74.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes75.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes76.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes77.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes78.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes79.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes80.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes81.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes82.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes83.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes84.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes85.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes86.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes87.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes88.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes89.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes90.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes91.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);
//#################################################################//
pFile = fopen("right_images/CreepyEyes92.bmp", "r");
if (pFile == NULL) {
printf("file not exist");
return 0;
}
fseek(pFile, 54, 0);
fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
fclose(pFile);
SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
SSD1351_display();
bcm2835_delay(speed);

}}
