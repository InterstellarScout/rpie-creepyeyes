#!/bin/bash
# Convert 100 images into bmp

currentDirectory=`pwd`

counter=0
while [ $counter -le 100 ]
do
echo $counter
echo pFile = fopen\(\"left_images/CreepyEyes${counter}.bmp\", \"r\"\)\; >> ${currentDirectory}/output/oled.c 
echo if \(pFile == NULL\) {  >> ${currentDirectory}/output/oled.c 
echo printf\(\"file not exist\"\)\; >> ${currentDirectory}/output/oled.c 
echo return 0\; >> ${currentDirectory}/output/oled.c 
echo } >> ${currentDirectory}/output/oled.c 
  
echo fseek\(pFile, 54, 0\)\; >> ${currentDirectory}/output/oled.c 
echo fread\(bmpBuffer, pixelSize, OLED_WIDTH \* OLED_HEIGHT, pFile\)\; >> ${currentDirectory}/output/oled.c 
echo fclose\(pFile\)\; >> ${currentDirectory}/output/oled.c 

echo SSD1351_bitmap24\(0, 0, bmpBuffer, standardSize, standardSize\)\; >> ${currentDirectory}/output/oled.c 
echo SSD1351_display\(\)\; >> ${currentDirectory}/output/oled.c 
echo bcm2835_delay\(speed\)\; >> ${currentDirectory}/output/oled.c 
echo //\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#\#// >> ${currentDirectory}/output/oled.c 
((counter++))
done
echo }} >> ${currentDirectory}/output/oled.c 
echo All done
