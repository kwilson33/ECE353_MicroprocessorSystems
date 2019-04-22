// Copyright (c) 2014, Joe Krachey
// All rights reserved.
//
// Redistribution and use in binary form, with or without modification, 
// are permitted provided that the following conditions are met:
//
// 1. Redistributions in binary form must reproduce the above copyright 
//    notice, this list of conditions and the following disclaimer in 
//    the documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR 
// PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR 
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, 
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; 
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, 
// EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>



#include "TM4C123.h"

// LCD stuff
#include "images.h"


// all drivers
#include "gpio_port.h"
#include "adc.h"
#include "driver_defines.h"
#include "i2c.h"
#include "interrupts.h"
#include "pc_buffer.h"
#include "spi.h"
#include "timers.h"
#include "uart.h"

// all peripherals
#include "accel.h"
#include "ece353_images.h"
#include "ft6x06.h"
#include "io_expander.h"
#include "launchpad_io.h"
#include "ps2.h"
#include "spi_select.h"
#include "wireless.h"
#include "ws2812b.h"
#include "ws2812b_effects.h"
#include "validate.h"
#include "serial_debug.h"
#include "eeprom.h"
#include "lcd.h"
#include "lcd_images.h"


// maybe put in other file
#define X_MAX 214
#define X_MIN 26
#define Y_MAX 302
#define Y_MIN 18

#define MOVE_LEFT  		2000
#define MOVE_RIGHT 		-2000
#define MOVE_UP 			13300
#define MOVE_DOWN  		7500

#define ADDR_START    256
#define NUM_BYTES      20

#endif