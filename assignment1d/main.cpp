#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> vdata1;
vector<string> vdata2{"start", "setspeed 2", "stop"};

void printAllVectors();

int main()
{

    vdata1 = vdata2;

    cout << vdata1.size() << endl;

    printAllVectors();
    cout << "Swap" << endl;
    vdata1[1].swap(vdata2[2]);
    printAllVectors();
    cout << "Swap back" << endl;
    vdata1[1].swap(vdata2[2]);
    printAllVectors();
    return 0;
}

void printAllVectors() {
    cout << "vdata1: ";
    for(auto i : vdata1)
        cout << i << ' ';
    cout << endl;
    cout << "vdata2: ";
    for(auto i : vdata2)
        cout << i << ' ';
    cout << endl;
}
