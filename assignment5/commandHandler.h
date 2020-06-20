#ifndef COMMANDHANDLER_H
#define COMMANDHANDLER_H

#endif // COMMANDHANDLER_H

#include <string>
#include <RotationMotor.h>

using namespace std;


enum commands {start, shutdown, restart, incRPM, decRPM, getRPM, unrecognized};

void commandHandler(RotationMotor &motor);
commands hashit (string const& inString);
