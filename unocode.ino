// 1.define pins
#define reciverpin 2
#define transmiter A0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(reciverpin,INPUT);
  pinMode(transmiter,OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
  int rxdata = digitalRead(reciverpin);
  Serial.print(rxdata);
  // delay(1000);

  if (rxdata == 1) {
    analogWrite(transmiter, 128); // Relay ON
} else {
    analogWrite(transmiter, 0);  // Relay OFF
}


}
