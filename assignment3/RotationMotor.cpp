#include "RotationMotor.h"
#include <iostream>

using namespace std;

RotationMotor::RotationMotor()
{
    RPM = 0;
    isOn = false;
}

int RotationMotor::getRPM() {
    if (isOn == true)
        cout << "RPM is: " << RPM << endl;
    else
        cout << "Motor is not on" << endl;
    return RPM;
}

void RotationMotor::incRPM() {
    if (isOn == true) {
        RPM += INCVAL;
        if (RPM > MAXRPM) {
            RPM = MAXRPM;
            cout << "RPM increased by: " << INCVAL << endl;
        }
    }
    else
        cout << "Motor is not on" << endl;
}

void RotationMotor::decRPM() {
    if (isOn == true) {
        RPM -= DECVAL;
        if (RPM < MINRPM) {
            RPM = MINRPM;
            cout << "RPM decreased by: " << DECVAL << endl;
        }
    }
    else
        cout << "Motor is not on" << endl;
}

void RotationMotor::start() {
    RPM = 0;
    isOn = true;
    cout << "Motor started" << endl;
}

void RotationMotor::restart() {
    if (isOn == true) {
        RPM = 0;
        cout << "Motor restarted" << endl;
    }
    else
        cout << "Motor is not on" << endl;
}

void RotationMotor::shutdown() {
    RPM = 0;
    isOn = false;
    cout << "Motor has been shutdown" << endl;
    exit(1);
}

bool RotationMotor::getON() {
    return isOn;
}

void RotationMotor::setRPM(int x) {
    RPM = x;
}
