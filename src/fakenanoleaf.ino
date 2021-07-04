
// Blynk Template and Device ID
#define BLYNK_TEMPLATE_ID ""
#define BLYNK_DEVICE_NAME ""

// Needed Libraries
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <FastLED.h>

// Blynk Auth
char auth[] = "";
char ssid[] = "";
char pass[] = "";

// LED Strip
#define DATA_PIN 13 
#define NUM_LEDS 60
#define LED_TYPE WS2811
#define COLOR_ORDER GRB 

///////////////////////////////////////////////////
// Control Flags
boolean onFlag = false;
boolean isLoud = false;
boolean isLight = false;

// Some Funky Default Configs
int r = 36;
int g = 192;
int b = 142;
int brightness = 125;

// Digital Pin Timers
int soundTimerID, lightTimerID;

// Global Object Definition
CRGB leds[NUM_LEDS];
BlynkTimer timer;
WidgetTerminal terminal(V1);

///////////////////////////////////////////////////

// LED Strip Control
void selectColor(int r, int g, int b) {

  for (int i=0; i < NUM_LEDS; i++) {
    leds[i] = CRGB(r, g, b);
  }
  FastLED.show();
}

void clearLED() {
  FastLED.clear();
  FastLED.show();
}

void setBrightness(int brightness) {
    FastLED.setBrightness(brightness);
    selectColor(r, g, b);
}

void stopTimers() {
  timer.disable(soundTimerID);
  timer.disable(lightTimerID);
  Blynk.virtualWrite(V7, 0);
  Blynk.virtualWrite(V5, 0);
}

/////////////////////////////////////////////////////////

// Blynk Virtual PinOut

/**
 * V2 - Master On/Off Button
 * 
 * Turns the LED Strip ON or OFF.
 */
BLYNK_WRITE(V2) {
  int buttonStatus = param.asInt();
  onFlag = buttonStatus;

  if (!onFlag) {
    clearLED();
    stopTimers();
    
  }
  else selectColor(r, g, b);
}

/**
 * V3 - RGB Zebra
 * 
 * LED Strip Color Selector
 */
BLYNK_WRITE(V3) {
    // Get the RGB channel values
    r = param[0].asInt();
    g = param[1].asInt();
    b = param[2].asInt();

    if (onFlag) selectColor(r,g,b);
}

/**
 * V5 - Ambient Light Interaction
 * 
 * Behavior:
 * - When light, turns the brightness all the way up.
 * - WHen dark, lets the user select the color.
 * 
 * THIS VIRTUAL PIN DISABLES V7 BY DEFAULT.
 */
BLYNK_WRITE(V5) {  
  if (onFlag) {
    // Deactivate Previous Timers
    Blynk.virtualWrite(V7, 0);
    timer.disable(soundTimerID);

    // Toggle Light Timer
    timer.toggle(lightTimerID);
  } else Blynk.virtualWrite(V5, 0);
}

/**
 * V6 - Brightness SLider
 * 
 * Lets the user select the desired brightness levels.
 */
BLYNK_WRITE(V6)
{
    // Set brightness
    int slider = param.asInt();
    if (onFlag) {
      brightness = slider;
      setBrightness(brightness);
    }
}

/**
 * V7 - Ambient Sound Interaction
 * 
 * Behavior:
 * - When loud, light the LED strip to the chosen brightness.
 * - WHen quiet, keeps the LED strip off.
 * 
 * THIS VIRTUAL PIN DISABLES V5 BY DEFAULT.
 */
BLYNK_WRITE(V7)
{
  if (onFlag) {
    // Deactivate Previous Timers
    Blynk.virtualWrite(V5, 0);
    timer.disable(lightTimerID);

    // Toggle Sound Timer
    timer.toggle(soundTimerID);
  } else Blynk.virtualWrite(V7, 0);
}

///////////////////////////////////////////////////////////

// Timer Functions

/**
 * Function to regularly read ambient sound
 */
void readAmbientSound() {
  isLoud = digitalRead(25);

  if (!isLoud) {
    setBrightness(brightness);
  } else {
    clearLED();
  }
}

/**
 * Function to regularly read ambient light
 */
void readAmbientLight() {
  isLight = digitalRead(26);
  if (!isLight) brightness = 255;
  setBrightness(brightness);
  Blynk.virtualWrite(V6, brightness);
}

/////////////////////////////////////////////////////////

/**
 * Makes sure UI has default values.
 */
void virtualSetUp() {
  // Turn Main Button Off
  Blynk.virtualWrite(V2, 0);

  // Change Color to Default
  Blynk.virtualWrite(V3, "36", "192", "142");

  // Reset Brightness and Clear LEDs
  Blynk.virtualWrite(V6, brightness); // Brightness
  clearLED();

  Blynk.virtualWrite(V7, 0); // Sound interaction
  Blynk.virtualWrite(V5, 0); // Light interaction
}

/////////////////////////////////////////////////////////

// Main code
void setup() {
  Blynk.begin(auth, ssid, pass);

  // Pin Modes
  pinMode(25, INPUT);
  pinMode(26, INPUT);

  // FastLED initializer
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);

  // Sound Timer
  soundTimerID = timer.setInterval(50L, readAmbientSound);
  timer.disable(soundTimerID);

  // Light Timer
  lightTimerID = timer.setInterval(200L, readAmbientLight);
  timer.disable(lightTimerID);

  // Setup
  virtualSetUp();
}

void loop() {
  Blynk.run();
  timer.run();
}
