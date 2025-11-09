#!/bin/bash
# Convert 100 images into bmp
currentDirectory=`pwd`

counter=0
while [ $counter -le 100 ]
do
echo $counter
mv ${currentDirectory}/frame_${counter}_delay-0.04s.png ${currentDirectory}/CreepyEyes${counter}.png
convert -verbose -depth 24 -type truecolor -units PixelsPerInch -density 72 -compress None -depth 24 ${currentDirectory}/CreepyEyes${counter}.png ${currentDirectory}/output/CreepyEyes${counter}.bmp
((counter++))
done
echo All done
