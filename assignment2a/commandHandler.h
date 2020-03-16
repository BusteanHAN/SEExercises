#ifndef COMMANDHANDLER_H
#define COMMANDHANDLER_H

#endif // COMMANDHANDLER_H

#include <string>

using namespace std;


enum commands {start, shutdown, restart, incRPM, decRPM, getRPM, unrecognized};

void commandHandler();
commands hashit (string const& inString);
