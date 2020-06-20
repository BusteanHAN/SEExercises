#include "commandprocessor.h"
#include "RotationMotor.h"
#include <iostream>

CommandProcessor::CommandProcessor()
{
    std::map<std::string, commandfunction_t> commands_;
}

CommandProcessor::commandfunction_t CommandProcessor::showRPM(RotationMotor &motor) {
    std::cout << motor.getRPM() << std::endl;
}

void CommandProcessor::addCommand(const std::string &command, CommandProcessor::commandfunction_t cf) {
    commands_[command] = cf;
}

void CommandProcessor::executeCommand(const std::string &command) {
    // p is an iterator
    auto p = commands_.find(command);
    if (p != end(commands_))
    {
        auto commandfunc = (*p).second;
        commandfunc();
    }
    else
    {
        std::cout << "Command not found" << std::endl;
    }
}
