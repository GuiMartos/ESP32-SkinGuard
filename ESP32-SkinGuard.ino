float sensor = 0.0;
float raw    = 0.0;

void setup() {
  Serial.begin(9600);

}

void loop() {
    for (int i=0;i <5;i++){
        raw += analogRead(15);  
    }
    Serial.print("Valor medio da leitura: ");
    Serial.println(raw/5);
    sensor = raw/1024.0*3.3;
    sensor = sensor/5;
    Serial.print("Nivel UV: ");
    Serial.println(sensor);
    raw = 0.0;
    delay(2000);
}
