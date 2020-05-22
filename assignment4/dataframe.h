#ifndef DATAFRAME_H
#define DATAFRAME_H
#include <array>

using dataframe_t = std::array<uint8_t, 255>;

class Dataframe
{
public:
    Dataframe();
    void setData(const dataframe_t &data, std::uint8_t size);
    void setChecksum();
    void setDataframe(const dataframe_t &dataframe);
    dataframe_t getDataframe();
    void show()const;
    void showAll()const;
    bool checksumIsCorrect() const;
    void clear();
private:
    dataframe_t frame;
};

#endif // DATAFRAME_H
