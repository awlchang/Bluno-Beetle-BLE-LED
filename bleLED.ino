#define LED_PIN 2 //定義LED PIN為2
int val = 0;      // variable to store the read value

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);//設定PIN 2為輸出模式
  Serial.begin(115200);
}

void loop() {
  if(Serial.available())
  {
    String receivedData = Serial.readString(); //透過藍牙接收資料
    
    if(receivedData == "on"){
//      Serial.print(receivedData);
      digitalWrite(LED_PIN, HIGH);//PIN 2輸出為HIGH,LED點亮
    }else if(receivedData == "off"){
//      Serial.print(receivedData);
      digitalWrite(LED_PIN, LOW);//PIN 2輸出為LOW,LED熄滅
    }
  }
}
