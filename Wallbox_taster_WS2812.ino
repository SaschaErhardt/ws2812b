#include <Adafruit_NeoPixel.h>
#define PIN_links 6 

#define NUMPIXELS 29
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN_links, NEO_GRB + NEO_KHZ800);
int delayval = 70;

const int taster = 7;
const int lichtsensor = 8;
const int stoerung = 10;
int tasterstatus = 0;
int lichtsensor_status = 0;
int stoerung_status = 1;
int i = 0;
void setup()
{
  pinMode(lichtsensor, INPUT);
  pinMode(taster, INPUT);
  pixels.begin();
  pixels.show();
}
void loop() 
{ 
  tasterstatus = digitalRead(taster);
  lichtsensor_status = digitalRead(lichtsensor);
  stoerung_status = digitalRead(stoerung);
  
  if (tasterstatus == HIGH and lichtsensor_status == HIGH and stoerung_status == HIGH)
  {
    
    for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(0,35,0)); 
    pixels.show();
    delay(delayval); // 
    }
    delay(delayval);
    for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(0,5,0));
    pixels.show();
    delay(delayval);
    }
  }
      if (tasterstatus == LOW and lichtsensor_status == HIGH and stoerung_status == HIGH)
  {
     for(int i = 28; i<NUMPIXELS;i--){
    pixels.setPixelColor(i, pixels.Color(100,100,100)); 
    pixels.show();
    delay(delayval);
    if(i==-1) {

    for(int g=28;g<NUMPIXELS;g--){
    pixels.setPixelColor(g, pixels.Color(100,100,100));
    pixels.show();
    delay(delayval);
    if(g==0) {
    break;
    }
    }
    }
    if(i==-1){
      break;
    }
    }
  }


    if (tasterstatus == HIGH and lichtsensor_status == LOW and stoerung_status == HIGH)
  {
   
    for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(0,250,0));
    pixels.show();
    delay(delayval); // 
    }
    delay(delayval);
    for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(0,50,0));
    pixels.show();
    delay(delayval);
    }
  }
      if (tasterstatus == LOW and lichtsensor_status == LOW and stoerung_status == HIGH)
  {

    for(int i = 28; i<NUMPIXELS;i--){
  
    pixels.setPixelColor(i, pixels.Color(0,0,0)); 
    pixels.show();
    delay(delayval);
    if(i==-1) {

    for(int g=28;g<NUMPIXELS;g--){
    pixels.setPixelColor(g, pixels.Color(0,0,0));
    pixels.show();
    delay(delayval);
    if(g==0) {
    break;
    }
    }
    }
    if(i==-1){
      break;
    }
    }
  }


  if (tasterstatus == HIGH and lichtsensor_status == LOW and stoerung_status == LOW)
  {
   
    for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(255,0,0)); 
    pixels.show();
    delay(1); // 
    }
    delay(1);
    for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(255,0,0));
    pixels.show();
    delay(1);
    }
  }
      if (tasterstatus == LOW and lichtsensor_status == LOW and stoerung_status == LOW)
  {

    for(int i = 28; i<NUMPIXELS;i--){
    
    pixels.setPixelColor(i, pixels.Color(255,0,0)); 
    pixels.show();
    delay(1);
    if(i==-1) {

    for(int g=28;g<NUMPIXELS;g--){
    pixels.setPixelColor(g, pixels.Color(255,0,0));
    pixels.show();
    delay(1);
    if(g==0) {
    break;
    }
    }
    }
    if(i==-1){
      break;
    }
    }
  }


  if (tasterstatus == HIGH and lichtsensor_status == HIGH and stoerung_status == LOW)
  {
   
    for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(255,0,0)); 
    pixels.show();
    delay(1); // 
    }
    delay(1);
    for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(255,0,0));
    pixels.show();
    delay(1);
    }
  }
      if (tasterstatus == LOW and lichtsensor_status == HIGH and stoerung_status == LOW)
  {
 
    for(int i = 28; i<NUMPIXELS;i--){
  
    pixels.setPixelColor(i, pixels.Color(255,0,0));
    pixels.show();
    delay(1);
    if(i==-1) {

    for(int g=28;g<NUMPIXELS;g--){
    pixels.setPixelColor(g, pixels.Color(255,0,0));
    pixels.show();
    delay(1);
    if(g==0) {
    break;
    }
    }
    }
    if(i==-1){
      break;
    }
    }
  }
} 
