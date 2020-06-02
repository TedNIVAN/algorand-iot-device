#include <SoftwareSerial.h>

SoftwareSerial BTserial(10, 11);

void setup()
{
    BTserial.begin(9600);
  
    char data[] = "70";

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
