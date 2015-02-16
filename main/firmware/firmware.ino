/**
* @file firmware.ino
* Project axefx.de MIDI Borad TWO
* @brief Main Firmware-File for MIDI-Board
* @version 1.0.0
* @author Bastian Buehrig
* @date 13/02/15
* license GPL axefx.de - 2015
*/


#include <Arduino.h>

// Standard-Config
#include "config.h"


// SD-Card includes
#if USE_SDCARD==1
  #include <SPI.h>
  #include <SD.h>
#endif


// LCD-Display includes
#if USE_LCD==1
  #include <LiquidCrystal.h>
  LiquidCrystal lcd(LCD_RS, LCD_E, LCD_D4, LCD_D5, LCD_D6, LCD_D7);
#endif



// MIDI includes
#include <MIDI.h>
MIDI_CREATE_DEFAULT_INSTANCE();


void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:

}
