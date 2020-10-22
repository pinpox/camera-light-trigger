#include <SPI.h>
#include <Wire.h>
//Bibliotheken für den betrieb des Displays
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);


void setup() {
	Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.display();
  delay(1000);
  display.clearDisplay();
}
void loop() {
	int value = analogRead(A0);
	Serial.println("Analog Value :");
	Serial.println(value);
  delay(1000);
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.print("Current: ");
  display.print(value);
  display.setCursor(0,10);
  display.print("Trigger ");
  display.print("BELOW: ");
  display.print("3");
  display.display();
  display.clearDisplay();
}
