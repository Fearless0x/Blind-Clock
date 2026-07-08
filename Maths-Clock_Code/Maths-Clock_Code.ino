#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include <SPI.h>

#define TFT_RST 13
#define TFT_DC 14
#define TFT_SCLK 16
#define TFT_MOSI 15

const int buzzer = 12;
Adafruit_ST7789 tft = Adafruit_ST7789(TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);

#include <Keypad.h>

const byte ROWS = 4; 
const byte COLS = 3; 

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'0', '#', '>'},
};

byte rowPins[ROWS] = {2, 6, 7, 11}; 
byte colPins[COLS] = {5, 4, 3}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
tft.init(284, 76); // screen dimensions
tft.setRotation(2); // this makes the screen landscape, could be different, try 0-3
tft.fillScreen(ST77XX_BLACK); // make sure there is nothing in the buffer

tft.setCursor(0,0); // make the cursor at the top left

pinMode(buzzer, OUTPUT);

int Hr = 00;
int Min = 00;
}

void loop() {{
  // put your main code here, to run repeatedly:
  loop; for(23){

    loop; for(59){
      tft.println("Time: ", Hr,":", Min);
      int Min = Min + 01;
      wait(1000);
    }
    int Hr = Hr + 01;
    int Min = 00;
    tft.println("Time: ", Hr,":", Min);
    if (Hr = 07, Min = 00){
      digitalWrite(buzzer,HIGH);
      randNum1 = random(0,100);
      randNum2 = random(0,100);
      tft.println("Solve:",randNum1,"x",randNum2);

      char key = Keypad.getKey();
      int Ans = randNum1 * randNum2;
       if (key != NO_KEY)
     {
      tft.setTextSize(1);
      tft.print(key); 
      for (count = 0; count < 5; count++)
        {
          userinput[count] = key;
        }


      if (key == '#')
      {
        tft.clearDisplay();
        tft.print(F("Number:"));
        tft.println(userinput);
      }

      if (userinput == ans);
        digitalWrite(buzzer,LOW);
      }
      else if (){
        digitalWrite(buzzer,LOW);
      }
    }
    

  }
  int Hr = 00;
  tft.println("Time: ", Hr,":", Min);
}}
