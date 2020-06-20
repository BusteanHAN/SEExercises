#ifndef MOTOR_H
#define MOTOR_H

#include <iostream>
#include <string.h>
#include "device.h"

/// The class Motor is_a Device.
class Motor: public Device
{
public:
    Motor(const std::string &id);
    Motor(const Motor& ) = delete;
    Motor& operator=( const Motor& ) = delete;
    virtual ~Motor() = default;
    virtual void initialise() override;
    virtual void reset() override;
    virtual void shutdown() override;
    // C++11 override specifier
    void setSpeed(double speed);
    double getSpeed() const;
private:
    double speed_;
};

#endif // MOTOR_H
