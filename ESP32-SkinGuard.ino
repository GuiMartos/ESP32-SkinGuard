#include <AnalogUVSensor.h>

int pin = 2; // Pino analógico para o sensor UV

AnalogUVSensor uvSensor; // Cria o objeto AnalogUVSensor com o pino analógico

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial
  Serial.println(__FILE__);

  Serial.print("ANALOG_UVSENSOR_LIB_VERSION: ");
  Serial.println(ANALOG_UVSENSOR_LIB_VERSION);

  uvSensor.begin(pin, 5.0, 1023);
  
  for (uint16_t milliVolt = 0; milliVolt < 1210; milliVolt += 10)
  {
    Serial.print(milliVolt);
    Serial.print("\t");
    Serial.println(uvSensor.mV2index(milliVolt), 1);
  }

  Serial.println("\n Done...");
}



void loop() {
}
                                                                                             
