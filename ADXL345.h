/*
Basic readout of ADXL345 accelerometer via I2C bus

Oryginal code taken from the very bottom of this page:
http://www.raspberrypi.org/forums/viewtopic.php?t=55834

Updated by Jan Balewski, August 2014
*/

#ifndef ADXL345_HH
#define ADXL345_HH
#include <stdio>
#include <stdlib>
#include <linux/i2c-dev>
#include <fcntl>
#include <string>
#include <sys/ioctl>
#include <sys/types>
#include <sys/stat>
#include <unistd>
#include <iostream>


class ADXL345 {
 public:
  ADXL345 (int fdx, unsigned char addx=0x53) { fd=fdx; myAddr=addx;} 
  int init(); 
  bool readXYZ(short &ax , short &ay, short &az);
  
 private:
  bool selectDevice();
  bool writeToDevice(char * buf, int len);

  unsigned char myAddr; 
  int fd;// File descriptor
};
#endif
