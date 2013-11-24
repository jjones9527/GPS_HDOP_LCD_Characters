/*
Bar Graph
*/

#include <LiquidCrystal.h>

//constants for the number of rows and columns in the LCD
const int numRows = 4;
const int numCols = 20;

int count;

//initialize the library with the numbers of the interface pins
LiquidCrystal lcd (12, 11, 7, 6, 5, 4);

// array of bits defining pixels for 8 custom characters
// ones and zeros indicate if a pixel is on or off

byte nil[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B00000, B00000};
byte high[8] = {B00001, B00001, B00011, B00011, B00111, B00111, B01111, B11111};
byte medHigh[8] = {B00000, B00000, B00010, B00010, B00110, B00110, B01110, B11110};
byte medLow[8] = {B00000, B00000, B00000, B00000, B00100, B00100, B01100, B11100};
byte low[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B01000, B11000};

void setup()
{
  lcd.begin(numCols, numRows);
  createChars();
}

void loop()
{
lcd.write(1);
delay(2000);
lcd.clear();
}

void createChars()
{
  lcd.createChar(0, nil);
  lcd.createChar(1, high);
  lcd.createChar(2, medHigh);
  lcd.createChar(3, medLow);
  lcd.createChar(4, low);
  lcd.clear();
}
