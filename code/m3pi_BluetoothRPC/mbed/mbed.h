/* mbed Microcontroller Library
 * Copyright (c) 2006-2009 ARM Limited. All rights reserved.
 * sford
 */ 
 
#ifndef MBED_H
#define MBED_H

#define MBED_LIBRARY_VERSION 27
 
// Useful C libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// mbed Debug libraries
#include "error.h"

// mbed Peripheral components
#include "DigitalIn.h"
#include "DigitalOut.h"
#include "DigitalInOut.h"
#include "BusIn.h"
#include "BusOut.h"
#include "BusInOut.h"
#include "PortIn.h"
#include "PortInOut.h"
#include "PortOut.h"
#include "AnalogIn.h"
#include "AnalogOut.h"
#include "PwmOut.h"
#include "Serial.h"
#include "SerialHalfDuplex.h"
#include "SPI.h"
#include "SPISlave.h"
#include "SPIHalfDuplex.h"
#include "I2C.h"
#include "I2CSlave.h"
#include "Ethernet.h"
#include "CAN.h"
//#include "SPI3.h"

// mbed Internal components
#include "Timer.h"
#include "Ticker.h"
#include "Timeout.h"
#include "LocalFileSystem.h"
#include "InterruptIn.h"
//#include "rpc.h"
//#include "rtc.h"
#include "wait_api.h"
#include "rtc_time.h"

using namespace mbed; 
using namespace std; 

#endif 

