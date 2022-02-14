

#define TFT_MAGENTA 0xF81F 
#define TFT_VIOLET 0x915C 
#define TFT_MAROON 0x7800 
#define TFT_PURPLE 0x780F 
#define TFT_BLUE_PURPLE 0x783F

#define TFT_



// Pause in milliseconds between screens, change to 0 to time font rendering
#define WAIT 3000
#define LONG_WAIT 4000

#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h

unsigned long targetTime = 0; // Used for testing draw times

void setup(void) {
  tft.init();
  tft.setRotation(1);
}

void loop() {
  int purple_options[] = {TFT_MAGENTA, TFT_VIOLET, TFT_MAROON, TFT_PURPLE, TFT_BLUE_PURPLE};
  int num_purple_options =5;
  targetTime = millis();


  //first stanza
  int line_1 = random(5,100);
  int line_2 = random(5,125);
  int line_3 = random(5,110);
  int line_4 =random(5,135);

  
  
  int color = purple_options[random(0,5)];
  tft.fillScreen(color);
  tft.setTextColor(TFT_BLACK, color);
  tft.drawString("I have eaten", line_1,5,4);
  delay(WAIT);

  color = purple_options[random(0,5)];
  tft.fillScreen(color);
  tft.setTextColor(TFT_BLACK, color);
  tft.drawString("I have eaten", line_1,5,4);
  tft.drawString("the plums", line_2,35,4);
  delay(WAIT);

  color = purple_options[random(0,5)];
  tft.fillScreen(color);
  tft.setTextColor(TFT_BLACK, color);
  tft.drawString("I have eaten", line_1,5,4);
  tft.drawString("the plums", line_2,35,4);
  tft.drawString("that were in", line_3,65,4);
  delay(WAIT);

  color = purple_options[random(0,5)];
  tft.fillScreen(color);
  tft.setTextColor(TFT_BLACK, color);
  tft.drawString("I have eaten", line_1,5,4);
  tft.drawString("the plums", line_2,35,4);
  tft.drawString("that were in", line_3,65,4);
  tft.drawString("the icebox", line_3,95,4);
  delay(LONG_WAIT);

  
  //second stanza
  tft.fillScreen(TFT_VIOLET);
  tft.setTextColor(TFT_WHITE, purple_options[random(0,5)]);
  tft.drawString("and which", 5, random(0,100), 4);
  delay(WAIT);
  tft.setTextColor(TFT_WHITE, purple_options[random(0,5)]);
  tft.drawString("you were probably", 15, random(0,100), 4);
  delay(WAIT);
  tft.setTextColor(TFT_WHITE, purple_options[random(0,5)]);
  tft.drawString("saving", 25,  random(0,100), 4);
  delay(WAIT);
  tft.setTextColor(TFT_WHITE, purple_options[random(0,5)]);
  tft.drawString("for breakfast", 35,  random(0,100), 4);
  delay(LONG_WAIT);

  //third stanza
  line_1 = random(5,107);
  line_2 = random(5,17);
  line_3 = random(5,132);
  line_4 =random(5,104);

//  line_1 = 107;
//  line_2 = 17;
//  line_3 = 132;
//  line_4 = 104;

  int color1 = purple_options[random(0,5)];
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(color1, TFT_BLACK);
  tft.drawString("Forgive me", line_1,5,4);
  delay(WAIT);

  int color2 = purple_options[random(0,5)];
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(color1, TFT_BLACK);
  tft.drawString("Forgive me", line_1,5,4);
  tft.setTextColor(color2, TFT_BLACK);
  tft.drawString("they were delicious", line_2,35,4);
  delay(WAIT);

  int color3 = purple_options[random(0,5)];
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(color1, TFT_BLACK);
  tft.drawString("Forgive me", line_1,5,4);
  tft.setTextColor(color2, TFT_BLACK);
  tft.drawString("they were delicious", line_2,35,4);
  tft.setTextColor(color3, TFT_BLACK);
  tft.drawString("so sweet", line_3,65,4);
  delay(WAIT);

  int color4 = purple_options[random(0,5)];
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(color1, TFT_BLACK);
  tft.drawString("Forgive me", line_1,5,4);
  tft.setTextColor(color2, TFT_BLACK);
  tft.drawString("they were delicious", line_2,35,4);
  tft.setTextColor(color3, TFT_BLACK);
  tft.drawString("so sweet", line_3,65,4);
  tft.setTextColor(color4, TFT_BLACK);
  tft.drawString("and so cold", line_4,95,4);
  delay(LONG_WAIT);

  

}
