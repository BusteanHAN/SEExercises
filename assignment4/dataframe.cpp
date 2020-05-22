#include "dataframe.h"
#include <iostream>

Dataframe::Dataframe()
{
    frame.fill(0);
}

void Dataframe::setData(const dataframe_t &data, std::uint8_t size)
{
    frame.at(1) = size;
    for (unsigned int i = 0; i < size; i++)
        frame.at(i + 2) = data.at(i);
}

void Dataframe::setChecksum()
{
    unsigned int checkSum = frame.at(1);
    for (unsigned int i = 2; i < (2 + frame.at(1)); i++)
    {
        checkSum += frame.at(i);
    }
    frame.at(0) = checkSum;
}

void Dataframe::setDataframe(const dataframe_t &dataframe)
{
    frame = dataframe;
}

dataframe_t Dataframe::getDataframe()
{
    return frame;
}

void Dataframe::show() const
{
    for (unsigned int i = 0; i < (1+frame.at(1)); i++) {
        std::cout << static_cast<int>(frame.at(i)) << " ";
    }
    std::cout << std::endl;
}

void Dataframe::showAll() const
{
    for (unsigned int i = 0; i < 255; i++) {
        std::cout << static_cast<int>(frame.at(i)) << " ";
    }
    std::cout << std::endl;
}

bool Dataframe::checksumIsCorrect() const
{
    unsigned int checkSumV = frame.at(1);
    for (unsigned int i = 2; i < (2 + frame.at(1)); i++)
    {
        checkSumV += frame.at(i);
    }
    return(frame.at(0) == checkSumV);
    
}

void Dataframe::clear() {
        frame.fill(0);
}
