#include <iostream>
#include "cartvec2d.h"
#include "dofxyrz.h"

using namespace std;

int main()
{
    DOFxyRz dof(1,2,3);
    CartVec2D add(2,3);
    double test1 = 2.1, test2 = 4.2;
    cout << dof << "\n";
    dof = dof + test1;
    cout << dof << "\n";
    dof = dof + add;
    cout << dof << "\n";
    dof = dof - test2;
    cout << dof << "\n";
    dof = dof + test2;
    cout << dof << "\n";
    return 0;
}
