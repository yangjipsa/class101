#include <Adafruit_NeoPixel.h>

int rgbLED = 3;
int sw1 = 7;
int sw2 = 4;

int numLEDs = 4;
bool POWER = false;

Adafruit_NeoPixel LEDS(numLEDs, rgbLED, NEO_GRB + NEO_KHZ800);

void setup()
{
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
  LEDS.begin(); 
}

void loop() 
{
  int val_sw1 = digitalRead(sw1);
  int val_sw2 = digitalRead(sw2);
  Serial.println(POWER);
    
  if(val_sw1)
  {
    POWER = !POWER;
    if (POWER)
    {
      for(int i=0; i<numLEDs; i++) 
      {
        LEDS.setPixelColor(i, LEDS.Color(50,50, 50));
        LEDS.show();
        delay(100); 
      }
    }
    delay(1000);
  }
  
  if (POWER)
  {
    if(val_sw2)
    {
      int red = random(256);
      int gre = random(256);
      int blu = random(256);

      for(int i=0; i<numLEDs; i++) 
      {
        LEDS.setPixelColor(i, LEDS.Color(red, gre, blu));
        LEDS.show();
        delay(100); 
      }
    }
  }
  else
  {
    LEDS.clear();
    LEDS.show();
  }
}
