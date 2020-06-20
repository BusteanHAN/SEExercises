#ifndef COMMANDPROCESSOR_H
#define COMMANDPROCESSOR_H

#include <functional>
#include <map>
#include <RotationMotor.h>


class CommandProcessor
{
public:
    using commandfunction_t = std::function<void()>;
    CommandProcessor();
    commandfunction_t showRPM(RotationMotor &motor);
    void addCommand(const std::string &command, commandfunction_t cf);
    void executeCommand(const std::string &command);

private:
    std::map<std::string, commandfunction_t> commands_;

};

#endif // COMMANDPROCESSOR_H
