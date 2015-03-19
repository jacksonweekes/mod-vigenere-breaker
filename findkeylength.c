#include <stdio.h>

int hexPairToInt(char x, char y);
int hexCharToInt(char x);

int main() {
   int frequencies[256];
   int value;

  value = hexPairToInt('F', '9');
   printf("F9 = %d", value);
}

int hexPairToInt(char x, char y) {
   int valueX, valueY, total;

   valueX = hexCharToInt(x);
   valueY = hexCharToInt(y);
   total = valueX * 16 + valueY;

   return total;
}

int hexCharToInt(char x) {
   int value;
   
   if(x >= '0' && x <= '9') {
      value = x - '0';
   } else {
     value = x - 'A' + 10;
   }

   return value;
}
