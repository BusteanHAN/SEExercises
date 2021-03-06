#include <RotationMotor.h>
#include <commandHandler.h>
#include <iostream>

string inCommand;

using namespace std;

void commandHandler(RotationMotor &motor) {
    do {
        cin >> inCommand;
        cout << endl;
        switch(hashit(inCommand)) {
        case 0:
            motor.start();
            break;
        case 1:
            motor.shutdown();
            break;
        case 2:
            motor.restart();
            break;
        case 3:
            motor.incRPM();
            break;
        case 4:
            motor.decRPM();
            break;
        case 5:
            motor.getRPM();
            break;
        default:
            cout << "Command is not recognized" << endl;
            break;
        }
    } while(1);
}

commands hashit (string const& inString) {
    if (inString == "start")    return start;
    if (inString == "shutdown") return shutdown;
    if (inString == "restart")  return restart;
    if (inString == "incRPM")   return incRPM;
    if (inString == "decRPM")   return decRPM;
    if (inString == "getRPM")   return getRPM;
}
