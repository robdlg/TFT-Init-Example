// Google AI Overview for "Adafruit_ST7735 on lilygo t-dongle-s3"
// "Example Arduino Initialization Code", based on
// https://components.espressif.com/components/espp/t-dongle-s3/versions/0.22.0/examples/example?language=
// MIT License

#include <Adafruit_GFX.h>    
#include <Adafruit_ST7735.h> 
#include <SPI.h>

// Define T-Dongle-S3 Display pins
#define TFT_CS    4
#define TFT_RST   1
#define TFT_DC    2
#define TFT_MOSI  3
#define TFT_SCLK  5
#define TFT_BL    38

// Initialize Adafruit ST7735 over hardware/software SPI
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);

void setup() {
  // Turn on the backlight
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, HIGH);

  // Initialize display for 80x160 ST7735 (Green tab or standard mini)
  tft.initR(INITR_MINI160x80); 
  tft.setRotation(1); // Adjust rotation as needed (0 - 3)
  
  tft.fillScreen(ST7735_BLACK);
  tft.setCursor(0, 0);
  tft.setTextColor(ST7735_WHITE);
  tft.setTextSize(1);
  tft.println("T-Dongle-S3 ready!");
}

void loop() {
  // Main code loop
}
