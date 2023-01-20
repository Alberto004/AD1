#include <ezButton.h>
int SER = 2;
int SRCLK = 3;
int RCLK = 4;
int puls = 5;
float i ;
ezButton button(puls);


void setup() {
  
  pinMode(SER, OUTPUT);
  pinMode(SRCLK, OUTPUT);
  pinMode(RCLK, OUTPUT);
  pinMode(puls, INPUT);
  button.setDebounceTime(3000);
  Serial.begin(9600);

}

void loop() {
  button.loop();
  if(button.isPressed()){
    start();
    int stato = button.getStateRaw();
    stato = !stato;
  }
}

void start() {
  int inizio = millis();
  do{
    float temporaw = millis() - inizio;
    float tempo1 = temporaw / 60000;
    float tempo2 = tempo1;
    float tempo3 = tempo1 - tempo2;
    float tempo4 = tempo3 * 60;
    float tempo5 = tempo4;
    float tempo6 = tempo4 - tempo5;
    float tempo7 = tempo6 * 100;
    float tempo8 = tempo7;
    float tempo9 = tempo8;
    /*int tempo [1] = tempo2
    int tempo [3] = tempo5
    int tempo [5] = tempo8;
*/
    for( i = 0; i < 7; i++ ){
      if (tempo[i] = 0){
        byte num = 11000000;
        shiftOut(SER, SRCLK, LSBFIRST, num);
        digitalWrite(RCLK, HIGH);
        digitalWrite(RCLK, LOW);
      }
      else if(tempo[i] = 1){
        byte num = 11111001;
        shiftOut(SER, SRCLK, LSBFIRST, num);
        digitalWrite(RCLK, HIGH);
        digitalWrite(RCLK, LOW);
      }
      else if(tempo[i] = 2){
        byte num = 10100100;
        shiftOut(SER, SRCLK, LSBFIRST, num);
        digitalWrite(RCLK, HIGH);
        digitalWrite(RCLK, LOW);
      }
      else if(tempo[i] = 3){
        byte num = 10110000;
        shiftOut(SER, SRCLK, LSBFIRST, num);
        digitalWrite(RCLK, HIGH);
        digitalWrite(RCLK, LOW);
      }
      else if(tempo[i] = 4){
        byte num = 10011001;
        shiftOut(SER, SRCLK, LSBFIRST, num);
        digitalWrite(RCLK, HIGH);
        digitalWrite(RCLK, LOW);
      }
      else if(tempo[i] = 5){
        byte num = 10010010;
        shiftOut(SER, SRCLK, LSBFIRST, num);
        digitalWrite(RCLK, HIGH);
        digitalWrite(RCLK, LOW);
      }
      else if(tempo[i] = 6){
        byte num = 10000010;
        shiftOut(SER, SRCLK, LSBFIRST, num);
        digitalWrite(RCLK, HIGH);
        digitalWrite(RCLK, LOW);
      }
      else if(tempo[i] = 7){
        byte num = 11111000;
        shiftOut(SER, SRCLK, LSBFIRST, num);
        digitalWrite(RCLK, HIGH);
        digitalWrite(RCLK, LOW);
      }
      else if(tempo[i] = 8){
        byte num = 10000000;
        shiftOut(SER, SRCLK, LSBFIRST, num);
        digitalWrite(RCLK, HIGH);
        digitalWrite(RCLK, LOW);
      }
      else if(tempo[i] = 9){
        byte num = 10010000;
        shiftOut(SER, SRCLK, LSBFIRST, num);
        digitalWrite(RCLK, HIGH);
        digitalWrite(RCLK, LOW);
      }
    }
  } 
  while(button.isReleased());

} 
