// Amie DD www.amiedd.com
// Princess Hilda Staff LED Ring 12
// 12/1/2016
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library
// NeoPixel Ring simple sketch (c) 2013 Shae Erisson

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

//PIN 1 on Arduino Gemma
#define PIN            1

// 12 Ring Neopixel LED
#define NUMPIXELS      12

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 500; // delay for half a second

void setup() {

  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() {

  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.

  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 220, 0)); // Princess Hilda Green Glow for Staff and Triforce

    pixels.show(); // 

    delay(delayval); // Delay for a period of time (in milliseconds).

  }
}