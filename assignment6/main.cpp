#include <iostream>
#include "cartvec2d.h"

using namespace std;

int main()
{
    CartVec2D vec1(5, 5);
    CartVec2D vec2(5, 5);
    cout << vec1.getCartVec2Dx() << " " << vec1.getCartVec2Dy() << "\n";
    cout << vec2.getCartVec2Dx() << " " << vec2.getCartVec2Dy() << "\n";
    vec1 += vec2;
    cout << vec1.getCartVec2Dx() << " " << vec1.getCartVec2Dy() << "\n";
    cout << vec2.getCartVec2Dx() << " " << vec2.getCartVec2Dy() << "\n";
    vec1 = vec1 * 5;
    cout << vec1.getCartVec2Dx() << " " << vec1.getCartVec2Dy() << "\n";
    cout << vec2.getCartVec2Dx() << " " << vec2.getCartVec2Dy() << "\n";
    return 0;
}
