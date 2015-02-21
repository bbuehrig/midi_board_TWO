/**
* @file config.h
* Project axefx.de MIDI Borad TWO
* @brief Config-File for Testing-Tool.
*        Here you have to modify your used Arduino-Pins
*        and if you like to use the LCD-Display.
* @version 1.0.0
* @author Bastian Buehrig
* @date 15/02/15
* license GPL axefx.de - 2015
*/

#ifndef Config_h
#define Config_h


// Include Configuration
// If you don't want a feature, switch it of with a '0'
#define USE_LCD 1


// ============== Pin Configuration ==============
//
// LCD-Pin Definitions
#if USE_LCD==1
  #define LCD_D7 44
  #define LCD_D6 45
  #define LCD_D5 46
  #define LCD_D4 47
  #define LCD_E  48
  #define LCD_RS 49
#endif


// LED und Switch Pins
#define SWT_MAX 23          // How many switches (and LEDs) does your MIDI-Board have?

#define SWT01 2            // BTNLED 1
#define LED01 3
#define SWT02 4
#define LED02 5
#define SWT03 6
#define LED03 7
#define SWT04 8
#define LED04 9
#define SWT05 10
#define LED05 11
#define SWT06 12
#define LED06 13

#define SWT07 23            // BTNLED2
#define LED07 25
#define SWT08 27
#define LED08 29
#define SWT09 31
#define LED09 33
#define SWT10 35
#define LED10 37
#define SWT11 39
#define LED11 41

#define SWT12 22            // BTNLED4
#define LED12 24
#define SWT13 26
#define LED13 28
#define SWT14 30
#define LED14 32
#define SWT15 34
#define LED15 36
#define SWT16 38
#define LED16 40

#define SWT17 43            // Analog2
#define LED17 42
#define SWT18 A8
#define LED18 A9
#define SWT19 A10
#define LED19 A11
#define SWT20 A12
#define LED20 A13
#define SWT21 A14
#define LED21 A15

#define SWT22 A6            // Analog 1
#define LED22 A7
#define SWT23 20
#define LED23 21

#define SWT24 16
#define LED24 17
#define SWT25 20
#define LED25 21
#define SWT26 50
#define LED26 51
#define SWT27 52
#define LED27 99
#define SWT28 53
#define LED28 99


// Expression-Pedal Pins
#define EXP01 A0
#define EXP02 A1

// Layer-LEDs
#define LAY_LED01 A2
#define LAY_LED02 A3
#define LAY_LED03 A4
#define LAY_LED04 A5





#endif
