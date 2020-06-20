#ifndef DEVICE_H
#define DEVICE_H

#include <iostream>
#include <string.h>

class Device
{
public:
    Device(const std::string &id);
    virtual ~Device() = default;
    const std::string getID() const;
    /// Abstract functions, must be implemented in the derived classes.
    virtual void initialise() = 0;
    virtual void reset() = 0;
    virtual void shutdown() = 0;
private:
    std::string ID_;
};

#endif // DEVICE_H
