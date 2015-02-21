/**
* @file testing.ino
* Project axefx.de MIDI Borad TWO
* @brief Testing-Tool for test all your switches, leds and 
*        LCD-Display (if you'll use one).
*        It will turn on and of all your LEDs. After it,
*        you can test your switches to light up the LEDs manually.
*        Additionally you can see some Informations on your LCD-Display
*        and it writes the same text in the serial monitor.
* @version 1.0.0
* @author Bastian Buehrig
* @date 16/02/15
* license GPL axefx.de - 2015
*/

#include "config.h"


// LCD-Display includes
#if USE_LCD==1
  #include <LiquidCrystal.h>
  LiquidCrystal lcd(LCD_RS, LCD_E, LCD_D4, LCD_D5, LCD_D6, LCD_D7);
#endif


// Pin-Definitions - you have to modify this list, if you like to use more or less than 23 Switches!
byte swt_pins[SWT_MAX] = { SWT01, SWT02, SWT03, SWT04, SWT05, SWT06, SWT07, SWT08, SWT09, SWT10, 
                          SWT11, SWT12, SWT13, SWT14, SWT15, SWT16, SWT17, SWT18, SWT19, SWT20,
                          SWT21, SWT22, SWT23 };    // SWT24, SWT25, SWT26, SWT27, SWT28

byte led_pins[SWT_MAX] = { LED01, LED02, LED03, LED04, LED05, LED06, LED07, LED08, LED09, LED10, 
                          LED11, LED12, LED13, LED14, LED15, LED16, LED17, LED18, LED19, LED20,
                          LED21, LED22, LED23 };    // LED24, LED25, LED26, LED27, LED28

byte lay_led[4]        = { LAY_LED01, LAY_LED02, LAY_LED03, LAY_LED04 };

    
/**
 * Function to initialize the pin-modes and
 * switch on and off shortly all LEDs.
 *
 */                      
void setup() {
  // Init Serial Monitor for Informations...
  Serial.begin(9600);
  
  
  #if USE_LCD==1
    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
  #endif
  
  printInfo("Initialisation...");
  delay(100);
  
  // Setting Pin-Modes
  for(byte i=0; i < SWT_MAX; i=i+1) {
    pinMode(swt_pins[i], INPUT_PULLUP);
    pinMode(led_pins[i], OUTPUT);
    digitalWrite(led_pins[i], LOW);
  }
  
  pinMode(LAY_LED01, OUTPUT);
  pinMode(LAY_LED02, OUTPUT);
  pinMode(LAY_LED03, OUTPUT);
  pinMode(LAY_LED04, OUTPUT);

 
  
  for(byte i=0; i < 4; i++) {
    digitalWrite(lay_led[i], HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(300);               // wait for a second
//    digitalWrite(lay_led[i], LOW);   // turn the LED off by making the voltage LOW
    delay(100);
  }
 
  
  // Turn LED on, then off
  for(byte i=0; i < SWT_MAX; i=i+1) {
    printInfo("LED " + String(i+1));
    
    digitalWrite(led_pins[i], HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);               // wait for a second
    digitalWrite(led_pins[i], LOW);   // turn the LED off by making the voltage LOW
    delay(100);
  }
 
}



/**
 * Main Loop-Function. Read out the Switch-States and
 * if you press a switch, the Switch LED will be switch on
 * during you are pressing the switch.
 *
 */
void loop() {
  
  for(byte i=0; i < SWT_MAX; i=i+1) {
    byte actState = digitalRead(swt_pins[i]);
    digitalWrite(led_pins[i], !actState);
    
    if(!actState) {
      printInfo("SWT " + String(i+1) + " pressed!");
    }
  }
}


/**
 * Function to print out informations to Serial-Monitor and LCD-Dsiplay
 *
 * @param infoText        Text to print out
 */
void printInfo(String infoText) {
  Serial.println(infoText);  
  
  #if USE_LCD==1
  lcd.clear();
    lcd.print(infoText);
  #endif
}
