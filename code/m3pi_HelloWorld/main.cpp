#include "mbed.h"
#include "m3pi.h"

Serial pc(USBTX, USBRX); // tx, rx
m3pi m3pi;

int main() {

    m3pi.locate(0,1);

//    m3pi.printf("Hello");
//    wait (2.0);

    m3pi.printf("Yeehaw");

    for (int count = 0; count < 1; count++) {
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
}