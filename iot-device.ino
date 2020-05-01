#include <SoftwareSerial.h>
#include <AESLib.h>

SoftwareSerial BTserial(10, 11);

const uint8_t key[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

void setup()
{
    BTserial.begin(9600);
  
    char data[] = "70              ";
    
    aes128_enc_single(key, data);

    for (int i = 0; i < sizeof(data) - 1; i++)
    {
        BTserial.print(data[i] & 0xFF, DEC);
        BTserial.print(" "); //separator
    }

    BTserial.println("");
}

void loop()
{
}
