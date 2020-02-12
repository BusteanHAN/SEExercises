#include <iostream>
#include <string>

using namespace std;

string s0 ("big");
string s1 ("boi");

void compare(string &a, string &b);

int main(void)
{

    char test[3];
    cout << "First string: " << s0 << endl << "Second string: " << s1 << endl;
    compare(s0, s1);

    swap (s0, s1);
    cout << "Strings have been swapped" << endl;
    cout << "First string: " << s0 << endl << "Second string: " << s1 << endl;
    compare(s0, s1);

    s1.replace(0,sizeof (s0), s0);
    cout << "Strings have been made the same" << endl;
    cout << "First string: " << s0 << endl << "Second string: " << s1 << endl;
    compare(s0, s1);

    s1.insert(1, s0);
    cout << "First string was inserted into second" << endl;
    cout << "First string: " << s0 << endl << "Second string: " << s1 << endl;

    s1.clear();
    cout << "Second string was cleared" << endl;
    cout << "First string: " << s0 << endl << "Second string: " << s1 << endl;

    s0.copy(test, sizeof(s0));
    cout << "First string was copied into a char array" << endl;
    cout << test << endl;
    return 0;
}

void compare(string &a, string &b) {
    if (a.compare(b) != 0)
        cout << a << " is not " << b << '\n';
    else
        cout << a << " is " << b << '\n';
}
