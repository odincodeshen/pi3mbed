#include "mbed.h"
#include "m3pi.h"
#include "SerialRPCInterface.h"

// RN42 module defaults to 115,200 and is connected on p28,p27
SerialRPCInterface Interface(p28, p27, 115200);

m3pi m3pi;

int main() {
  
  m3pi.locate(0,1);
  m3pi.printf("Blutooth");

    for (int count = 0; count < 2; count++) {
        m3pi.forward(1); // Forward half speed
        wait (0.5);        // wait half a second
        m3pi.left(0.5);    // Turn left at half speed
        wait (0.5);        // wait half a second
        m3pi.backward(0.5);// Backward at half speed 
        wait (0.5);        // wait half a second
        m3pi.right(0.5);   // Turn right at half speed
        wait (0.5);        // wait half a second
    }
    m3pi.stop();
  // do nothing, just wait for RPC comands
  while(1) {}
}