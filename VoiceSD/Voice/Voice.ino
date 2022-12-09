#include <SD.h>             // необходимо включить SD библиотеку
#define SD_ChipSelectPin 4  // использование цифрового вывода 4 на arduino nano 328
#include <TMRpcm.h>         // также необходимо включить данную библиотеку...
#include <SPI.h>

TMRpcm tmrpcm;   // создать объект для использования в данном скетче
 
void setup()
{
  tmrpcm.speakerPin = 9; // 11 на Mega, 9 на Uno, Nano и т.д.
 
  if (!SD.begin(SD_ChipSelectPin)) // проверить, есть ли карта, и может ли она быть инициализирована:
  {
    return;                        // если нет, то ничего не делать
  }
 
  tmrpcm.volume(1);

  tmrpcm.play("ost.wav");
}


 
void loop()
{  



}
