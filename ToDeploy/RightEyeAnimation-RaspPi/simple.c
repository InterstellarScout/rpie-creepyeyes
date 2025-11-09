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

	//while(1) {
		pFile = fopen("CreepyEye2.bmp", "r");
		//pFile = fopen("pic4.bmp", "r");
		
	   if (pFile == NULL) {
			printf("file not exist\n");
			return 0;
		}
	  
		fseek(pFile, 54, 0);
		fread(bmpBuffer, pixelSize, OLED_WIDTH * OLED_HEIGHT, pFile);
		fclose(pFile);

		SSD1351_bitmap24(0, 0, bmpBuffer, standardSize, standardSize);
		SSD1351_display();
		bcm2835_delay(speed);
		
	//}
	
}