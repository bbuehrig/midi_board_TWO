#ifndef Config_h
#define Config_h


// Include Configuration
// If you don't want a feature, switch it of with a '0'
#define USE_SDCARD 1
#define USE_LCD 1
#define USE_AXEFX 1


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


// SD-Card-Pin Definitons
#if USE_SDCARD==1
  #define SDC_MISO 50
  #define SDC_MOSI 51
  #define SDC_SCK 52
  #define SDC_CS 53
#endif


// LED und Switch Pins
#define SWT01 2
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

#define SWT07 22
#define LED07 24
#define SWT08 26
#define LED08 28
#define SWT09 30
#define LED09 32
#define SWT10 34
#define LED10 36
#define SWT11 38
#define LED11 40

#define SWT12 23
#define LED12 25
#define SWT13 27
#define LED13 29
#define SWT14 31
#define LED14 33
#define SWT15 35
#define LED15 37
#define SWT16 39
#define LED16 41

#define SWT17 42
#define LED17 43
#define SWT18 A8
#define LED18 A9
#define SWT19 A10
#define LED19 A11
#define SWT20 A12
#define LED20 A13
#define SWT21 A14
#define LED21 A15

#define SWT22 A6
#define LED22 A7
#define SWT23 14
#define LED23 15

// Not used if you have SD-Card
#if USE_SDCARD==0
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
#endif


// Expression-Pedal Pins
#define EXP01 A0
#define EXP02 A1

// Layer-LEDs
#define LAY_LED01 A2
#define LAY_LED02 A3
#define LAY_LED03 A4
#define LAY_LED04 A5




// ============== Standard Board Configurtation ===============
//
// ...will be overwritten by SD-Card Config if you use SD-Cards!
//    If there is no SD-Card or SD-Card-Config-File present
//    it will use the Standard Configuration!
//



#endif
