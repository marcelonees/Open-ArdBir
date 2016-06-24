//lcd
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

// push buttons


const char Button_start = A0;
const char Button_enter = A1;
const char Button_up    = A2;
const char Button_dn    = A3;

/*
const char Button_start = 0;
const char Button_enter = 1;
const char Button_up    = 2;
const char Button_dn    = 3;
*/

// sensor
OneWire ds(7);

// outputs
const byte Pump = 6;
const byte Buzz = 8;
const byte Heat = 9;
