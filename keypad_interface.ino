#include<Keypad.h>
const byte rows = 4;
const byte colms= 4;
char mode;


char keys[rows][colms]={
       {'1' , '2' , '3' , '4'},
       {'5' , '6' , '7' , '8'},
       {'9' , '0' , 'm' , 's'},
       {'c' , 's' , 'e' , '#'}
     };

   byte rowpin[rows] = {7,6,5,4};
   byte colmpin[colms] = {8,9,10,11};
   Keypad keyspad = Keypad(makeKeymap(keys), rowpin , colmpin , rows , colms);

void setup() {
  Serial.begin(9600);
}

void loop() {
   mode = keyspad.getKey();

  Serial.println(mode);
  delay(1000);
 
}
 
