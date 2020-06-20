#include <iostream>
#include "device.h"
#include "motor.h"

using namespace std;

int main()
{
    Motor a("1"),b("2");
    a.initialise();
    a.setSpeed(700);
    a.reset();
    b.initialise();
    b.setSpeed(600);
    b.shutdown();
    Motor c("3");
    c.initialise();
    return 0;
}
