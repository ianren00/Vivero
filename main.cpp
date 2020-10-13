#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C_Hangul.h>
#include <ESP8266WiFi.h>
#include <DHT.h>

#define DHT_PIN 14
#define DHTTYPE DHT11

DHT dht(DHT_PIN, DHTTYPE); //INICIALIZACION DEL SENSOR

int t;
int hr;
int hs;

LiquidCrystal_I2C_Hangul lcd(0x3F, 16, 2);

void setup() {
  
  // put your setup code here, to run once:
  pinMode(14, INPUT);//GPIO0 Sensor HR%
  pinMode(13, INPUT);//GPIO2 Sensor HSuelo
  pinMode(12, INPUT);//GPIO15 Sensor Temperatura              ASIGNACION DE PINES
  Wire.begin(11, 10);// SDA / SCL
  pinMode(9, OUTPUT);//GPIO14
  pinMode(5, OUTPUT);//GPIO16 sin interrupcion

/*
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setDelayTime(1000);                        CONFIGURACION DE LCD
  lcd.printHangul(L"Hola mundo",0,7); //lcd.printHangul(한글 문장, 시작 포인트, 문장 길이);
  lcd.print(" ");
  lcd.printHangul(L"Hola",4,7);
*/

}




void loop() {
  
  
}

void sens(void) {     // Vcc 5v, A0
  t =  ;
  hr = ;
  hs =
}
void menu(void){

  do{/* code */
    t = 
    hr =
    hs =
    system("cls");
    printf("Condiciones")
    printf("Temperatura: " %t)
    printf("HR% : " %hr);
    printf("Humedad Suelo: " %hs);

  } while (/* condition */);

  
}