

void initMecanum(){
  pinMode(FRONT_LFT_EN_A,OUTPUT);
  pinMode(FRONT_LFT_EN_B,OUTPUT);
  pinMode(FRONT_LFT_PWM_A,OUTPUT);
  pinMode(FRONT_LFT_PWM_B,OUTPUT);
  
  pinMode(BACK_LFT_EN_A,OUTPUT);
  pinMode(BACK_LFT_EN_B,OUTPUT);
  pinMode(BACK_LFT_PWM_A,OUTPUT);
  pinMode(BACK_LFT_PWM_B,OUTPUT);
  
  pinMode(FRONT_RGT_EN_A,OUTPUT);
  pinMode(FRONT_RGT_EN_B,OUTPUT);
  pinMode(FRONT_RGT_PWM_A,OUTPUT);
  pinMode(FRONT_RGT_PWM_B,OUTPUT);

  pinMode(BACK_RGT_EN_A,OUTPUT);
  pinMode(BACK_RGT_EN_B,OUTPUT);
  pinMode(BACK_RGT_PWM_A,OUTPUT);
  pinMode(BACK_RGT_PWM_B,OUTPUT);

  digitalWrite(FRONT_LFT_EN_A, HIGH);
  digitalWrite(FRONT_LFT_EN_B, HIGH);

  digitalWrite(BACK_LFT_EN_A, HIGH);
  digitalWrite(BACK_LFT_EN_B, HIGH);

  digitalWrite(FRONT_RGT_EN_A, HIGH);
  digitalWrite(FRONT_RGT_EN_B, HIGH);

  digitalWrite(BACK_RGT_EN_A, HIGH);
  digitalWrite(BACK_RGT_EN_B, HIGH);

  SoftPWMBegin();
  
  SoftPWMSet(FRONT_LFT_PWM_A, 0);
  SoftPWMSet(FRONT_LFT_PWM_B, 0);
  SoftPWMSet(BACK_LFT_PWM_A, 0);
  SoftPWMSet(BACK_LFT_PWM_B, 0);
  SoftPWMSet(FRONT_RGT_PWM_A, 0);
  SoftPWMSet(FRONT_RGT_PWM_B, 0);
  SoftPWMSet(BACK_RGT_PWM_A, 0);
  SoftPWMSet(BACK_RGT_PWM_B, 0);

  // SoftPWMSetFadeTime(FRONT_LFT_PWM_A, 1000, 1000);  
  // SoftPWMSetFadeTime(FRONT_LFT_PWM_B, 1000, 1000);
  // SoftPWMSetFadeTime(BACK_LFT_PWM_A, 1000, 1000);  
  // SoftPWMSetFadeTime(BACK_LFT_PWM_B, 1000, 1000);
  // SoftPWMSetFadeTime(FRONT_RGT_PWM_A, 1000, 1000);  
  // SoftPWMSetFadeTime(FRONT_RGT_PWM_B, 1000, 1000);
  // SoftPWMSetFadeTime(BACK_RGT_PWM_A, 1000, 1000);  
  // SoftPWMSetFadeTime(BACK_RGT_PWM_B, 1000, 1000);


  // pwmi_TL_A = new AVR_PWM(FRONT_LFT_PWM_A, FREQ, 0);
  // pwmi_TL_B = new AVR_PWM(FRONT_LFT_PWM_B, FREQ, 0);
  // pwmi_BL_A = new AVR_PWM(BACK_LFT_PWM_A, FREQ, 0);
  // pwmi_BL_B = new AVR_PWM(BACK_LFT_PWM_B, FREQ, 0);
  // pwmi_TR_A = new AVR_PWM(FRONT_RGT_PWM_A, FREQ, 0);
  // pwmi_TR_B = new AVR_PWM(FRONT_RGT_PWM_B, FREQ, 0);
  // pwmi_BR_A = new AVR_PWM(BACK_RGT_PWM_A, FREQ, 0);
  // pwmi_BR_B = new AVR_PWM(BACK_RGT_PWM_B, FREQ, 0);

}