#include "device.h"

Device::Device(const std::string &id)
{
    std::cout<<"Device created with id: "<<id<<std::endl;
    ID_ = id;
}

const std::string Device:: getID() const
{
    return ID_;
}
