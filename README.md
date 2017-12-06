

Requires WiringPi

Compile with;

git pull origin

g++ -o main -l rt ADXL345.cpp main.cpp -lm -lwiringPi

rpi accelerometer
http://ozzmaker.com/guide-to-interfacing-a-gyro-and-accelerometer-with-a-raspberry-pi/

grove arduino accelerometer
https://github.com/Seeed-Studio/Accelerometer_And_Gyroscope_LSM6DS3/blob/master/SparkFunLSM6DS3.cpp

wire to wiringpi
https://www.raspberrypi.org/forums/viewtopic.php?f=44&t=53680

ADXL345
https://github.com/mcauser/Grove-3Axis-Digital-Accelerometer-16g-ADXL345

normal: 235,113,31 mag:變動在5之內


usb:
/dev/sda1       8064 15130623 15122560  7.2G  c W95 FAT32 (LBA)
 LABEL="USB DISK" UUID="EA60-6436" TYPE="vfat" PARTUUID="ea0dd879-01"

 
 auto atart 
 https://www.raspberrypi.org/forums/viewtopic.php?f=33&t=126937
 https://stackoverflow.com/questions/46997065/how-to-autostart-a-c-program-on-raspberry-pi
 https://www.linuxbabe.com/linux-server/how-to-enable-etcrc-local-with-systemd
 
 在/etc/init.d/auto_start裡，執行檔案
 cd /home/pi/ADXL345/
 ./main
 檔案會自動存到usb