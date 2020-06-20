#include "motor.h"

Motor::Motor(const std::string &id): Device(id)
{
    std::cout<<"Created motor with id: "<<id<<std::endl;
}

void Motor::setSpeed(double speed)
{
    std::cout<<"Motor "<<getID()<<" speed set to: "<<speed<<std::endl;
    speed_ = speed;
}

double Motor::getSpeed() const
{
    return speed_;
}

void Motor::initialise()
{
    speed_ = 0;
    std::cout<<"Motor "<<getID()<<" initialized"<<std::endl;
}

void Motor:: reset()
{
    speed_ = 0;
    std::cout<<"Motor "<<getID()<<" speed reset to: "<<speed_<<std::endl;
}

void Motor:: shutdown()
{
    speed_=0;
    std::cout<<"Motor "<<getID()<<" shutdown "<<std::endl;
}
