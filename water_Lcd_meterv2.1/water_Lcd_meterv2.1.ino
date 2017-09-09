#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 6, d5 = 5, d6 = 4, d7 = 3;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int long bitCount=0;              // number of bits currently captured
int long facilityCode=0;        // decoded facility code
int long x=0;
double y=0.0;
// interrupt that happens when INTO goes low (0 bit)
void ISR_INT0()
{
 // Serial.println("Water flowing");   // uncomment this line to display raw binary
  bitCount++;
  
}
 
 
void setup()
{
 // pinMode(13, OUTPUT);  // LED
  pinMode(2, INPUT);     // DATA0 (INT0)

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("RV COLLG: OF ENGG");
  lcd.setCursor(1,2);
  lcd.print("IN-TELLI METER");
  delay(3000);
  lcd.clear();
  lcd.print("     PROJECT");
  lcd.setCursor(0,2);
  lcd.print("INFINITE LOOP");
  Serial.begin(9600);
  Serial.println("Water Meter Reading");
  delay(3000);
  lcd.setCursor(1,1);
 attachInterrupt(0, ISR_INT0, FALLING);
 }
 
void loop()
{
 // lcd.clear();
  if( facilityCode != bitCount )
  {
    facilityCode =  bitCount;
    if(bitCount%40==0)
   {
    bitCount=0;
    y=y+0.1;
    Serial.print(y,1);
   Serial.println(" litres");
   lcd.clear();
   lcd.write("Water Meter");
   lcd.setCursor(1,2);
   lcd.print(y);
   lcd.write(" litres");
   } 
  }
  
 
}
