#include <LiquidCrystal.h> 
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; 
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); 
// Array of messages to display 
const char* messages[] = { 
 "hello, world!", 
 "Embedded systems are interesting", 
 "Check out the course", 
 "Learn at your own pace!!!" 
}; 
const int numMessages = sizeof(messages) / sizeof(messages[0]); 
void setup() { 
 lcd.begin(16, 2); 
} 
void loop() { 
 for (int i = 0; i < numMessages; i++) { 
 lcd.clear(); // Clear the display 
 lcd.print(messages[i]); // Print the current message 
 delay(1000); // Wait for 1 second 
 // Scroll the message to the left 
 for (int positionCounter = 0; positionCounter < 16; positionCounter++) {  lcd.scrollDisplayLeft(); 
 delay(150); 
 } 
 // Wait at the end of the left scroll
 delay(1000);  } 
}
