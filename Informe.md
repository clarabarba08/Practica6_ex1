# PRÀCTICA 6
## EXERCICI 1: Lectura/escritura memòria SD
Consisteix en conectar la ESP32 amb un lector de targetes MicroSD. En aquesta targeta he afegit un fitxer anomenat *arxiu.txt*. Dins de l'arxiu he escrit *Hola a tothom*. Per realitzar el muntatge he seguit la següent assignació de pins:
```cpp
#define CS_PIN 15
// MOSI 23
// MISO 19
// CLK 18
```
En el port MISO hi he conectat una resistència en sèrie, i el VCC a 5V.

En el setup s'ha d'inicialitzar el lector i després obrir l'arxiu que hi ha dins de la SD i llegir-lo amb la següent instrucció: ```myFile.read()```

M'ha funcionat correctament i en el següent vídeo podem veure com es mostra per pantalla *Hola a tothom*.
[Vídeo funcionament](https://drive.google.com/file/d/1Xsqk7YNdsitHwzYRxnjyy0Lx45XFzlbj/view?usp=sharing) 

## EXERCICI 2
El codi d'aquest exercici i el seu corresponent informe el podem trobar en el repositori *Practica6_ex2*. 