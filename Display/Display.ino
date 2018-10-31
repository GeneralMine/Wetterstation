#include <LiquidCrystal.h>

const int LCD_RS = 12;
const int LCD_Enable = 11;
const int LCD_D4 = 5;
const int LCD_D5 = 4;
const int LCD_D6 = 3;
const int LCD_D7 = 2;
int Pwm = 9;
int test = 0;
#define ROWS 4
#define COLUMNS 20

LiquidCrystal lcd(LCD_RS, LCD_Enable, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

void setup()
{
  lcd.begin(COLUMNS, ROWS);
  lcd.setCursor(1, 0);
  lcd.print("initialising...");
  lcd.setCursor(0, 1);
  lcd.print("I am Marvin");
  analogWrite(Pwm, 150);
}
  void loop()
  {
  }
void ini()
{
}
