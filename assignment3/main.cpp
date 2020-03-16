#include <RotationMotor.h>
#include <array>
#include <iostream>

using namespace std;

array<int, 3> ar{2, -2, 3};
array<RotationMotor, 4> ar2{};

int main()
{
    for (auto& el: ar)
    {
    cout << el << " ";
    el *= 10;
    }
    cout << endl;
    ar[0] = 10 * ar[1];
    for (const auto& el: ar)
    {
    cout << el << " ";
    }
    for (const auto& el: ar2)
    {
        el.setRPM(100);
    }
    return 0;
}
