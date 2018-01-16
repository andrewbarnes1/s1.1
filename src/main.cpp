#include <mbed.h>

void on(DigitalOut colour)
{
  colour.write(0);
}

void off(DigitalOut colour)
{
  colour.write(1);
}


int main() {

  DigitalOut red(PTB22);
  DigitalOut blue(PTB21);
  DigitalOut green(PTE26);

  while(1) {
    off(blue);
    off(green);
    on(red);
    wait(0.5);
    off(red);
    on(blue);
    wait(0.5);
    off(blue);
    on(green);
    wait(0.5);
  }

  /*
  while(1) {
  blue.write(1);
  green.write(1);
  red.write(0);
  wait(0.5);
  red.write(1);
  blue.write(0);
  wait(0.5);
  blue.write(1);
  green.write(0);
  wait(0.5);
}
*/
}
