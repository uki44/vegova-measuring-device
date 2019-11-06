#include<LiquidCrystal.h>
int read1,read2,read3,read4,read5,read6,read7,read8,read9,read10;
int read1_1,read2_1,read3_1,read4_1,read5_1,read6_1,read7_1,read8_1,read9_1,read10_1;
int temp_read,pot_read,lux_print;
int lm35_pin = A1;
float pres_pin = A0;
int pot_pin = A2;
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
float ldrvoltage,rvoltage;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  pinMode(3,OUTPUT);
  lcd.begin(16,2);

}

void loop() {
// temp_read = analogRead(lm35_pin);
 //lux_read = analogRead(pres_pin);
 pot_read = analogRead(pot_pin);

 analogWrite(3,pot_read/4);


read1 = analogRead(A0);
read1_1 = analogRead(A1);
delay(10);
read2 = analogRead(A0);
read2_1 = analogRead(A1);
delay(10);
read3 = analogRead(A0);
read3_1= analogRead(A1);
delay(10);
read4 = analogRead(A0);
read4_1 = analogRead(A1);
delay(10);
read5 = analogRead(A0);
read5_1 = analogRead(A1);
delay(10);
read6 = analogRead(A0);
read6_1= analogRead(A1);
delay(10);
read7 = analogRead(A0);
read7_1 = analogRead(A1);
delay(10);
read8 = analogRead(A0);
read8_1 = analogRead(A1);
delay(10);
read9 = analogRead(A0);
read9_1 = analogRead(A1);
delay(10);
read10 = analogRead(A0);
read10_1 = analogRead(A1);
delay(10);
/* float mv = (temp_read/1024.0)*5000;
 float cel = mv/10;
 */
 /*ldrvoltage = 5.0 - rvoltage; */
float lux_read = (( read1 + read2 + read3 + read4 + read5 + read6 + read7 + read8 + read9 + read10)/10.00);
float temp_read = (( read1_1 + read2_1 + read3_1 + read4_1 + read5_1 + read6_1 + read7_1 + read8_1 + read9_1 + read10_1)/10.00);
lux_print = lux_read*11.0;
float cel = temp_read * 0.4887855;
 lcd.setCursor(0,0);
 lcd.print(lux_print);
 lcd.print("  ");
 lcd.setCursor(6,0);
 lcd.print("lux");
 lcd.setCursor(0,1);
 lcd.print("Temp:");
 lcd.setCursor(6,1);
 lcd.print(cel);
 lcd.setCursor(10,1);
 lcd.print("C");
 delay(200); 
 //lcd.clear();

}
