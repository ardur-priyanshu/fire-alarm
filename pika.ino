#include <LiquidCrystal.h> 
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);  

int flame = 11;  
int buzzer = 13;  
int blue = 8;  
int orange = 9;  
int read_value;   
void setup(){  
pinMode(flame, INPUT);  
pinMode(buzzer,OUTPUT);  
pinMode(orange,OUTPUT);  
pinMode(blue,OUTPUT);   

lcd.begin(16, 2); 
lcd.clear(); lcd.setCursor(0,0); 
lcd.print("    Welcome     "); 
lcd.setCursor(0,1); 
lcd.print("    Everyone    "); 
delay(2000); 
lcd.clear(); 
}  

void loop(){ 
read_value = digitalRead(flame);  
if(read_value==HIGH){  
lcd.setCursor(0, 0); 
lcd.print("   No   Flame   ");    
lcd.setCursor(0, 1); 
lcd.print(".....Normal.....");    
digitalWrite(buzzer, LOW);  
digitalWrite(orange, LOW);   
digitalWrite(blue, HIGH);   
} else{  
lcd.setCursor(0, 0); 
lcd.print("Fire is Detected");   
lcd.setCursor(0, 1); 
lcd.print("Alert....!!!    ");
      
digitalWrite(buzzer, HIGH);   
digitalWrite(orange, HIGH);   
digitalWrite(blue, LOW);    
delay(1000); 
} 
delay(100); 
}                 
