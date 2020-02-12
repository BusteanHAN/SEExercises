#include <iostream>
#include <vector>

using namespace std;

vector<int> v1 = {0, 1, 2, 3, 4, 5};
vector<int> v2 = {5, 4, 3, 2, 1, 0};

int main()
{
    cout << "Initial declarations: " << endl << "V1: ";
    for(auto i : v1) {
        cout << v1[i] << ' ';
    }
    cout << endl << "V2: ";
    for(auto i : v2) {
        cout << v2[i] << ' ';
    }
    cout << endl << "V1 gets two elements added by use of push_back member function";
    v1.push_back(6);
    v1.push_back(7);
    cout << endl << "V1: ";
    for(auto i : v1) {
        cout << v1[i] << ' ';
    }
    cout << endl;
    return 0;
}
