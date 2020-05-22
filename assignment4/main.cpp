#include <iostream>
#include <dataframe.h>

using namespace std;

int main()
{
    dataframe_t testData;
    uint testSize = 5;
    for(unsigned int i = 0; i < testSize; i++)
        testData.at(i) = i+2;
    Dataframe Roomba;
    Roomba.show();
    Roomba.setData(testData, testSize);
    Roomba.setChecksum();
    Roomba.showAll();
    return 0;
}
