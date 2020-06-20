#include <iostream>
#include <main.h>
#include <commandprocessor.h>

using namespace std;

int main()
{
    RotationMotor rotMotor;
    CommandProcessor cmdp;
    string input;
    cmdp.addCommand("start", bind(&RotationMotor::start, &rotMotor));
    cmdp.addCommand("getRPM", bind(&RotationMotor::getRPM, &rotMotor));
    cmdp.addCommand("setRPM", bind(&RotationMotor::setRPM, &rotMotor));
    cmdp.addCommand("incRPM", bind(&RotationMotor::incRPM, &rotMotor));
    cmdp.addCommand("decRPM", bind(&RotationMotor::decRPM, &rotMotor));
    cmdp.addCommand("shutdown", bind(&RotationMotor::shutdown, &rotMotor));
    cmdp.addCommand("restart", bind(&RotationMotor::restart, &rotMotor));
    while(1) {
        cout << "Enter a command: \n" << endl;
        cin >> input;
        cmdp.executeCommand(input);
    }
    return 0;
}
