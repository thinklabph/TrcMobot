#include "SoftPWM.h"

// Mecanum pins
#define FRONT_LFT_PWM_A 2
#define FRONT_LFT_PWM_B 3
#define FRONT_LFT_EN_A A0
#define FRONT_LFT_EN_B A1

#define BACK_LFT_PWM_A 4 
#define BACK_LFT_PWM_B 5
#define BACK_LFT_EN_A A2
#define BACK_LFT_EN_B A3

#define FRONT_RGT_PWM_A 7    
#define FRONT_RGT_PWM_B 6
#define FRONT_RGT_EN_A A4
#define FRONT_RGT_EN_B A5

#define BACK_RGT_PWM_A 9  
#define BACK_RGT_PWM_B 8
#define BACK_RGT_EN_A A6
#define BACK_RGT_EN_B A7

void setup() {
  Serial.begin(115200);

  initMecanum();

  SoftPWMSet(FRONT_LFT_PWM_A, 0);
  SoftPWMSet(FRONT_LFT_PWM_B, 50);

  delay(5000);

  SoftPWMSet(FRONT_LFT_PWM_A, 0);
  SoftPWMSet(FRONT_LFT_PWM_B, 0);
}

void loop() {
  // put your main code here, to run repeatedly:

}
