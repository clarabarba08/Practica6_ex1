#include <SPI.h>
#include <SD.h>

#define CS_PIN 15
// MOSI 23
// MISO 19
// CLK 18

File myFile;
void setup()
{
    
Serial.begin(9600);
Serial.print("Iniciando SD ...");
if (!SD.begin(CS_PIN)) {
Serial.println("No se pudo inicializar");
 return;
}
Serial.println("inicializacion exitosa");
  Serial.printf("Llegint: %s\n", "/arxiu.txt");
myFile = SD.open("/arxiu.txt");//abrimos el archivo
if (myFile) {
Serial.println("arxiu.txt:");
while (myFile.available()) {
Serial.write(myFile.read());
}
myFile.close(); //cerramos el archivo
} else {
Serial.println("Error a l'obrir l'arxiu");
}
}
void loop()
{
}
