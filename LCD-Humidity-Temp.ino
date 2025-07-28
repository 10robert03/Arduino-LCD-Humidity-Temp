#include <LiquidCrystal.h>
#include <DHT.h>

#define DHTPIN 2         // DHT11 Data Pin
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE); // Needs the pin and the DHT-Type

// LCD Pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 6);

void setup() {
  lcd.begin(16, 2);// 16 columns, 2 rows on my LCD --> LCD type 1602
  dht.begin();
}

void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  if (isnan(temp) || isnan(hum)) {
    lcd.clear(); // clears the display of the LCD
    lcd.setCursor(0, 0);// set cursor position to 0, 0 (top left corner)
    lcd.print("Sensor Error");
    delay(2000); 
    return;
  }
  // Looking for errors

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: "); // Temperature would be too long for the LCD
  lcd.print(temp);
  lcd.print((char)223); // Displays the ° symbol. HD44780 LCDs usually map it to ASCII 223
  lcd.print("C");

  lcd.setCursor(0, 1); // set cursor position to 0,1 (bottom left corner)
  lcd.print("Humidity: "); // Prints Humidity: x% at the given position 0, 1
  lcd.print(hum);
  lcd.print("%");

  delay(2000);
}