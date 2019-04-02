// Hx711.DOUT - pin #A2
// Hx711.SCK - pin #A3

#include "Hx711.h"

#define Hx711_Dout A2
#define Hx711_Sck A3
Hx711 scale(Hx711_Dout, Hx711_Sck);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("getValue() : ");
  Serial.print(scale.getValue());
  Serial.println(" ");
  Serial.print("getGram() : ");
  Serial.print(scale.getGram(),1);
  Serial.println(" g");
}
