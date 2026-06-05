#include <DHT.h>
#include "dht_model.h"
#include "vibration_model.h"

Eloquent::ML::Port::dhtModel model;
Eloquent::ML::Port::vibrationModel vibrationmodel;

#define DHTPIN 4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
#define VIBRATION_PIN 5
#define LED_BUILTIN 23
#define BUZZER_PIN 2
#define PUMP_PIN 18

int SensorValue = 0;
//int lowlevel = 300;
//int highlevel = 700;


void setup() {
  Serial.begin(115200);
  Serial.println("Vibration Sensor Ready...");

  dht.begin();
  pinMode(VIBRATION_PIN, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(PUMP_PIN, OUTPUT);
  pinMode(DHTPIN, INPUT);

  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(PUMP_PIN, LOW);
}

void loop() {
  delay(200);

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  int vibration = digitalRead(VIBRATION_PIN);

  if(isnan(humidity) || isnan(temperature)){
    Serial.println(("Sensor Error!"));
    return;
  }
  Serial.print("Temperature:");
  Serial.print(temperature);
  Serial.print("°C");

  Serial.print("Humidity:");
  Serial.print(humidity);
  Serial.println("%");

  Serial.println("-----------------");
  if(vibration == HIGH ){
    Serial.println("Vibration Detected!");
    digitalWrite(PUMP_PIN,HIGH);
    digitalWrite(LED_BUILTIN, HIGH );
    delay(200);
    digitalWrite(LED_BUILTIN, LOW );
    delay(20);
    digitalWrite(LED_BUILTIN, HIGH );
    tone(BUZZER_PIN, 2000);
  }  
  else{
    Serial.println("No Vibration");
    digitalWrite(LED_BUILTIN,LOW );
    digitalWrite(PUMP_PIN, LOW);
    noTone(BUZZER_PIN);

  }
  float features1[3];
  float features2[1];

  features1[0] = digitalRead(4);
  features2[0] = digitalRead(5);

  int prediction1 = model.predict(features1);
  int prediction2 = model.predict(features2);
  int prediction3 = 0;

  Serial.print("Sensor Value 1: ");
  Serial.println(features1[0]);

  Serial.print("Prediction 1: ");
  Serial.println(prediction1);

  Serial.print("Sensor Value 2: ");
  Serial.println(features2[0]);

  Serial.print("Prediction 2: ");
  Serial.print(prediction2);

  if (prediction1 == 1 && prediction2 == 0){
   Serial.println("Fault Detect");
  } else {
   Serial.println("No Fault Detect");
  }
  SensorValue = digitalRead(18);
  Serial.println(SensorValue);
  if (prediction3 == 1){
    digitalWrite(PUMP_PIN, HIGH);
  }
  else {
    digitalWrite(PUMP_PIN, LOW);
  }
}
